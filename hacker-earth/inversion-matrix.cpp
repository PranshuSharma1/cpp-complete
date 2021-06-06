// Sample code to perform I/O:

#include <iostream>

using namespace std;




int main() {
	int t;
	cin >> t;								// Reading input from STDIN
	// cout << "Input number is " << num << endl;	// Writing output to STDOUT
	
	for(int i=1;i<=t;i++){
		int n;
		cin>>n;
		int mat[n][n];
		//inputiing the matrix
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>mat[i][j];
			}
		}
		int max_count_inversion=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				
				for(int p=i;p<n;p++){
					for(int q=j;q<n;q++){
						//write your code here
						if(mat[i][j] > mat[p][q]){
							// cout<<"the values are this "<<mat[i][j]<<" and "<<mat[p][q]<<endl;
							max_count_inversion++;
						}
					}
				}
			}
		}
		cout<<max_count_inversion<<endl;

	}
}

