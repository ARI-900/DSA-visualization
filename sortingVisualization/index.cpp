
#include <graphics.h>
#include <conio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;





class BubbleSort {
	
	public:
		BubbleSort() {
		
			int gd = DETECT, gm;
		    initgraph(&gd, &gm, (char*)"");
		
		    // Make the window full-screen
		    initwindow(getmaxwidth(), getmaxheight(), "Bubble Sort Visualization");
		
		    int arr[] = {100, 52, 200, 264, 250, 150, 120, 80, 18, 55, 342, 43, 29, 18};
		    int n = sizeof(arr) / sizeof(arr[0]);
		
		    int margin = 50;  // Add margins for spacing at the top, bottom, left, right
		
		    displayArray(arr, n, margin);
		    bubbleSort(arr, n, margin);
		    
		}
	
	
		~BubbleSort() {
			getch();
			closegraph();	
		}
		
		
		void swap(int &a, int &b) {
		    int temp = a;
		    a = b;
		    b = temp;
		}
		
		// Function to display the array as bars
		void displayArray(int arr[], int n, int margin) {
		    cleardevice();
		    for (int i = 0; i < n; i++) {
		        setfillstyle(SOLID_FILL, BLUE);
		        bar(margin+ (i*80), getmaxy() - 50, margin+30 + (i * 80), getmaxy() - 50 - arr[i]);
		        rectangle(margin + (i * 80), getmaxy() - 50, margin+30 + (i * 80), getmaxy() - 50 - arr[i]);
		    }
		    delay(500);
		}

		void bubbleSort(int arr[], int n, int margin) {
		    for (int i = 0; i < n - 1; i++) {
		        for (int j = 0; j < n - i - 1; j++) {
		            if (arr[j] > arr[j + 1]) {
		                // Highlight the bars being swapped
		                setfillstyle(SOLID_FILL, RED);
		                bar(margin + (j * 80), getmaxy() - 50, margin + 30 + (j * 80), getmaxy() - 50 - arr[j]);
		                rectangle(margin + (j * 80), getmaxy() - 50, margin + 30 + (j * 80), getmaxy() - 50 - arr[j]);
		                bar(margin + ((j + 1) * 80), getmaxy() - 50, margin + 30 + ((j + 1) * 80), getmaxy() - 50 - arr[j + 1]);
		                rectangle(margin + ((j + 1) * 80), getmaxy() - 50, margin + 30 + ((j + 1) * 80), getmaxy() - 50 - arr[j + 1]);
		                delay(500);
		
		                swap(arr[j], arr[j + 1]);
		                displayArray(arr, n, margin);
		            }
		        }
		    }
		}

};





class SelectionSort {
	
	public:
		SelectionSort() {
			
			int gd = DETECT, gm;
			initgraph(&gd, &gm, (char*)"");
			
			initwindow(getmaxwidth(), getmaxheight(), "Selection Sort Visualization");
			
			int arr[] = {100, 52, 200, 264, 250, 150, 120, 80, 18, 55, 342, 43, 29, 18};
		    int n = sizeof(arr) / sizeof(arr[0]);
		    
		    int margin = 50;
		    
		    displayArray(arr, n, margin);
			selectionSort(arr, n, margin);
		}
		
		
		~SelectionSort() {
			getch();
			closegraph();
		}
		
		
		void displayArray(int *arr, int n, int margin, int pivot=-1, int bar1=-1, int bar2=-1) {
			
			cleardevice();
			
			int screenWidth = getmaxx();
			int screenHeight = getmaxy();
			
			for(int i=0; i<n; i++) {
				
				if( i == bar1 || i == bar2 ) {
					setfillstyle(SOLID_FILL, RED);
				}
				else if( i == pivot) {
					setfillstyle(SOLID_FILL, YELLOW);
				}
				else {
					setfillstyle(SOLID_FILL, BLUE);
				}
				
				int left = margin + (i * 80); 
				int right = margin + 30 + (i * 80);
				int top = screenHeight - margin - arr[i];
				int bottom = screenHeight - margin;
				
				bar(left, bottom, right, top);
				rectangle(left, bottom, right, top);
			}
			
			delay(500);
		}
		
		
		void selectionSort(int *arr, int n, int margin) {
			for(int i=0; i<n; i++) {
				
			    int mini = arr[i];
			    int flag = i; // track which one is current mini value
			    int pos = i;
			    
			    // UI activity: 
			    displayArray(arr, n, margin, i );
			    delay(100);
			    
			    for(int j=i+1; j<n; j++) {
			      	displayArray(arr, n, margin, i, flag, j);
			      	
			        if( mini > arr[j] ) {
			          mini = arr[j];
			          pos = j;
			          flag = j;
			          displayArray(arr, n, margin, i, flag, j);
			        }
			        
			        
			    }
			    
			    if(pos != i) {
			      int temp = arr[i];
			      arr[i] = mini;
			      arr[pos] = temp;
			      displayArray(arr, n, margin, i, pos);
			      
			    }
			  }
		}
};





class InsertionSort {
	public:
		InsertionSort() {
			
			int gd = DETECT, gm;
			initgraph(&gd, &gm, (char*)"");
			
			initwindow(getmaxwidth(), getmaxheight(), "Insertion Sort Visualization");
			
			int arr[] = {500, 100, 52, 200, 264, 250, 150, 120, 80, 18, 55, 342, 43, 29, 18};
		    int n = sizeof(arr) / sizeof(arr[0]);
			
			int margin = 50;
			
			displayArray(arr, n, margin);
			insertionSort(arr, n, margin);
		}
		
	public:	
		~InsertionSort() {
			getch();
			closegraph();
		}
		
	public:
		void displayArray(int *arr, int n, int margin, int pivot=-1, int bar1=-1, int bar2=-1) {
			
			cleardevice();
			int screenWidth = getmaxx();
			int screenHeight = getmaxy();
			
			for(int i=0; i<n; i++) {
				
				if( i == bar1 || i ==  bar2 ) {
					setfillstyle(SOLID_FILL, RED);
				}
				
				else if( i == pivot ) {
					setfillstyle(SOLID_FILL, YELLOW);
				}
				else {
					setfillstyle(SOLID_FILL, BLUE);
				}
				
				int left = margin + (i * 80);
				int bottom = screenHeight - margin;
				int right = margin + 30 + (i * 80);
				int top = screenHeight - margin - arr[i];
				
				
				bar(left, bottom, right, top);
				rectangle(left, bottom, right, top);
			}
			
			delay(1000);
		}
		
		
		void insertionSort(int *arr, int n, int margin) {
			
			for(int i=1; i<n; i++) {
    			
			    int temp = arr[i];
			    int j = i-1;
			    
			    // UI activity
			    displayArray(arr, n, margin, i, j);
			    delay(100);
			    
			    while( (j >= 0) && (arr[j] > temp) ) {
			     
				  displayArray(arr, n, margin, i, j, j+1);
				 
			      arr[j+1] = arr[j];
			      j--;
			      
			      displayArray(arr, n, margin, i, j, j+1);
			      delay(100);
			    }
			    
			    j += 1;
			    arr[j] = temp;
			    displayArray(arr, n, margin, j);
			  }
			
		}
		
};





class QuickSortVisualizer {
public:
    QuickSortVisualizer() {
        int gd = DETECT, gm;
        initgraph(&gd, &gm, (char*)"");

        initwindow(getmaxwidth(), getmaxheight(), "Quick Sort Visualization");

        int arr[] = {500, 100, 490, 600, 284, 350, 150, 240, 100, 18, 156, 342, 80, 55, 18};
        int n = sizeof(arr) / sizeof(arr[0]);
        int margin = 50;

        displayArray(arr, n, margin);
        quickSort(arr, 0, n - 1, margin, n);
    }

    ~QuickSortVisualizer() {
        getch();
        closegraph();
    }


public:
    void displayArray(int *arr, int n, int margin, int pivot = -1, int bar1 = -1, int bar2 = -1) {
        cleardevice();
        int screenWidth = getmaxx();
        int screenHeight = getmaxy();

        for (int i = 0; i < n; i++) {
            if (i == bar1)
                setfillstyle(SOLID_FILL, RED);
            else if (i == bar2)
                setfillstyle(SOLID_FILL, WHITE);
            else if (i == pivot)
                setfillstyle(SOLID_FILL, YELLOW);
            else
                setfillstyle(SOLID_FILL, BLUE);

            int left   = margin + (i * 80);
            int bottom = screenHeight - margin;
            int right  = margin + 30 + (i * 80);
            int top    = screenHeight - margin - arr[i];

            bar(left, bottom, right, top);
            rectangle(left, bottom, right, top);
        }
        delay(500); // Pause at the end of drawing the whole array.
    }

public:
    int partition(int *arr, int low, int high, int margin, int n) {
        int pivot = arr[low];
        int i = low - 1;
        int j = high + 1;

        // Initially, show the pivot (at index low) in YELLOW.
        displayArray(arr, n, margin, low);
        delay(500);

        while (true) {
           
            do {
                i = i + 1;
            } while (arr[i] < pivot);
            
            displayArray(arr, n, margin, low, i);
            delay(500);
            
            
            do {
                j = j - 1;
            } while (arr[j] > pivot);
            

            displayArray(arr, n, margin, low, i, j);
            delay(500);

            if (i >= j) {
				arr[low] = arr[j];
				arr[j] = pivot;
                displayArray(arr, n, margin, low, j); 	// heighlight pivot with yellow and down/j th with red
                delay(500);
                return j;
            }

            swap(arr[i], arr[j]);
            displayArray(arr, n, margin, low, i, j);
            delay(500);
        }
    }

    
    void quickSort(int *arr, int low, int high, int margin, int n) {
        if (low < high) {
            int pivotPos = partition(arr, low, high, margin, n);
            quickSort(arr, low, pivotPos, margin, n);
            quickSort(arr, pivotPos + 1, high, margin, n);
        }
    }
};





class MergeSortVisualizer {
	
	public:
		MergeSortVisualizer() {
			
		}
		
	public:
		~MergeSortVisualizer() {
			
		}
	public:
		void displayArray() {
			
		}
	public:
		void mergeSort() {
			
		}
	public:
		void merge() {
			
		}
};






int main() {
	
	//	BubbleSort obj;
	//	SelectionSort obj;
	//	InsertionSort obj;
		QuickSortVisualizer obj;
	//  MergeSortVisualizer obj;
	
	
	return 0;
}


