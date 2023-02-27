#include<bits/stdc++.h>

using namespace std;



int main(){

	/*

	// pattern1 rectangle

	for(int row=0;row<3;row++){

		for(int col=0;col<6;col++){

			cout<<" * ";

		}cout<<endl;

	}



	//pattern2 square: 



	for(int row=0;row<6;row++){

		for(int col=0;col<6;col++){

			cout<<" * ";

		}cout<<endl;

	}



	// pattern 3 hollow rectangle :



	for(int row=0;row<4;row++){

		for(int col=0;col<6;col++){

			if(row==0|| row==3){

				cout<<" * ";

		}

		else{

			if(col==0 || col==5){

				cout<<" * ";

			}

			else{

				cout<<"   ";

			}

		}

		

	}

	cout<<endl;

}

	// pattern4 half pyramid :



	for(int row=0;row<6;row++){

		for(int star=0;star<row+1;star++){

			cout<<" * ";

		}cout<<endl;

	}

	

	// pattern5 numeric half pyramid

	for(int row=0;row<5;row++){

		for(int col=0;col<row+1;col++){

			cout<<" "<<col+1<<" ";

		}cout<<endl;

	}



	// pattern 6 inverted half pyramid :



	for(int row=0;row<5;row++){

		for(int col=0;col<5-row;col++){

			cout<<" "<<col+1<<" ";

		}cout<<endl;

	}



	// pattern 7 full pyramid :



	for(int row=0;row<6;row++){

		for(int space=0;space<5-row;space++){

			cout<<" ";

		}

		for(int star=0;star<row+1;star++){

			cout<<" * ";

		}cout<<endl;

	}

	

	// pattern 8 inverted full pyramid :



	for(int row=0;row<6;row++){

		for(int space=0;space<row;space++){

			cout<<" ";

		}

		for(int star=0;star<6-row;star++){

			cout<<" * ";

		}cout<<endl;

	}

	// pattern 9 numeric full pyramid :



	for(int row=0;row<5;row++){

		for(int space=0;space<4-row;space++){

			cout<<" ";

		}

		for(int num=0;num<row+1;num++){

			cout<<num+1;

		}

		for(int s=row;s>0;s--){

			cout<<s;



		}

		cout<<endl;

		}



	// pattern 10 solid diamond :



	for(int row=0;row<5;row++){

		for(int space=0;space<4-row;space++){

			cout<<" ";

		}

		for(int star=0;star<row+1;star++){

			cout<<" *";

		}cout<<endl;

	}

	for(int row=0;row<5;row++){

		for(int space =0;space<row;space++){

			cout<<" ";

		}

		for(int star=0;star<5-row;star++){

			cout<<" *";

		}cout<<endl;

	}



	// pattern 11 hollow diamond :



	for(int row=0;row<5;row++){

		for(int space=0;space<4-row;space++){

			cout<<" ";

		}

		for(int star=0;star<2*row+1;star++){

			if(star==0 || star==2*row){

				cout<<" *";

			}

			else{

				cout<<" ";

			}

		}cout<<endl;

	}

	for(int row=0;row<5;row++){

		for(int space=0;space<row;space++){

			cout<<" ";

		}

		for(int star=0;star<9-2*row;star++){

			if(star==0 || star==9-2*row-1){

				cout<<" *";

			}

			else{

				cout<<" ";

			}

		}cout<<endl;

	}



	// pattern 12 fliffed solid diamond :

	

	for(int row=0;row<5;row++){

		for(int star1=0;star1<5-row;star1++){

			cout<<"*";

		}

		for(int space=0;space<2*row+1;space++){

			cout<<" ";

		}

		for(int star2=0;star2<5-row;star2++){

			cout<<"*";

		}

		cout<<endl;

	}

	for(int row=0;row<5;row++){

		for(int star1=0;star1<row+1;star1++){

			cout<<"*";

		}

		for(int space=0;space<9-2*row;space++){

			cout<<" ";

		}

		for(int star2=0;star2<row+1;star2++){

			cout<<"*";

		}

		cout<<endl;

	}



	// pattern 13fancy pattern 2 :



	for(int row=0;row<4;row++){

		for(int col=0;col<row+1;col++){

			cout<<row+1;

			if(col!=row){

				cout<<"*";

			}

		}cout<<endl;

	}

	for(int row=0;row<4;row++){

		for(int col=0;col<4-row;col++){

			cout<<4-row;

			if(col!=4-row-1){

				cout<<"*";

			}

		}cout<<endl;

	} 



	// pattern 14 alphabet palindrome pyramid :



	for(int row=0;row<5;row++){

		for(int ch=0;ch<row+1;ch++){

			cout<<char(65+ch)<<" ";

		}

		int a=row;

		for(;a>=1;a--){

			cout<<char(64+a)<<" ";

		}



		cout<<endl;

	}



	// pattern 15 inverted hollow half pyramid :



	for(int row=0;row<6;row++){

		for(int ch=0;ch<6-row;ch++){

			if(row==0 || row==5){

				cout<<" * ";

			}

			else{

				if(ch==0 || ch==6-row-1){

					cout<<" * ";

				}

				else{

					cout<<"   ";



			}

				}

		}cout<<endl;

	}



	// pattern 16 hollow full pyramid :



	for(int row=0;row<6;row++){

		for(int space=0;space<5-row;space++){

			cout<<" ";

		}

		



		for(int star=0;star<2*row+1;star++){

			if(row==0|| row==5){

				cout<<"*";

			}

			else{

				if(star==0 || star==2*row){

					cout<<"*";

				}

				else{

					cout<<" ";

				}

			}

		}cout<<endl;







		}



	// pattern 17 numeric hollow half pyramid :



	for(int row=0;row<5;row++){

		for(int star=0;star<row+1;star++){

			if(row==0 || row==4){

				cout<<" "<<star+1<<" ";

			}

			else{

				if(star==0|| star==row){

					cout<<" "<<star+1<<" ";

				}

				else{

					cout<<"   ";

				}

			}

		}cout<<endl;

	}



	// pattern 18 numeric hollow inverted half pyramid :



	int n;

	cin>>n;

	for(int row=0;row<n;row++){

		for(int j=row+1;j<=n;j++){

			if(j==row+1|| j==n || row==0){

				cout<<" "<<j<<" ";

			}

			else{

				cout<<"   ";

			}

		}cout<<endl;

			

			}



	// pattern 19 numeric palindrome equilateral pyramid  :



	for(int row=0;row<5;row++){

		for(int space=0;space<4-row;space++){

			cout<<"   ";

		}

		for(int n=0;n<row+1;n++){

			cout<<" "<<n+1<<" ";

		}

		for(int n=row;n>=1;n--){

			cout<<" "<<n<<" ";

		}

		cout<<endl;

	}



	// pattern 20 fancy pattern 1 :



	for(int row=0;row<5;row++){

		for(int star1=0;star1<8-row;star1++){

			cout<<" * ";

		}

		for(int n=0;n<2*row+1;n++){

			if(n%2==0){

				cout<<" "<<row+1<<" ";

			}

			else{

				cout<<" * ";

			}

		}

		for(int star2=0;star2<8-row;star2++){

			cout<<" * ";

		}

		cout<<endl;

	}



	// pattern 21 solid half diamond :

	for(int row=0;row<5;row++){

		for(int star1=0;star1<row+1;star1++){

			cout<<" * ";

		}cout<<endl;

	}

	for(int row=0;row<4;row++){

		for(int star2=0;star2<4-row;star2++){

			cout<<" * ";

		}cout<<endl;

	}



	// patttern 22 :fancy pattern 3  :  

	int n;

	cin>>n;

	for(int row=0;row<n;row++){

		int cond=row<=n/2 ? 2*row :2*(n-row-1);



		for(int c=0;c<=cond;c++){

			if(c==0 || c ==cond ){

				cout<<"*";

			}

			else if(c<=cond/2){

				cout<<c;



			}

			else{

				cout<<cond-c;

			}

			



		}cout<<endl;

		

	}



	// pattern 23 : fancy pattern 2  :



	int a=1;

	int n;

	cin>>n;

	for(int row=0;row<n;row++){

		for(int c=0;c<2*row+1;c++){

			if(c%2!=0){

				cout<<" * ";

			}

			else{

				cout<<" "<<a++<<" ";

			}



	}

		cout<<endl;

	}

	

	int start=a-n;

	int b=start;



	for(int row=0;row<n;row++){

		int k=start;

		for(int num=0;num<=n-row-1;num++){

			cout<<" "<<k++<<" ";

			if(num<n-row-1){

				cout<<" * ";

			}

	}



	start=start-(n-row-1);



	cout<<endl;

}



	// // pattern 24 pascals traingle pattern  :



	int n;

	cin>>n;

	for(int row=1;row<=n;row++){

		int val=1;

		for(int n=1;n<=row;n++){

			cout<<val<<" ";

			val=(val*(row-n))/n;

		}cout<<endl;



	}



	// pattern 25 floyds triangle pattern :



	int a=1;

	for(int row=0;row<7;row++){

		for(int c=0;c<row+1;c++){

			cout<<" "<<a++<<" ";

		}cout<<endl;

	}



	// pattern 26 butterfly pattern :



	for(int row=0;row<5;row++){

		for(int star=0;star<row+1;star++){

			cout<<" * ";

		}

		for(int space=0;space<9-2*row;space++){

			cout<<"   ";



			

		}

		for(int star2=0;star2<row+1;star2++){

			cout<<" * ";

		}



		cout<<endl;



		}



		for(int row=0;row<5;row++){

			for(int star1=0;star1<5-row;star1++){

				cout<<" * ";

			}

			for(int space =0;space<2*row+1;space++){

				cout<<"   ";

			}

			for(int star2=0;star2<5-row;star2++){

				cout<<" * ";

			}cout<<endl;

		}



	// pattern 27 numeric full pyramid :



	int n;

	cin>>n;

	

	for(int row=0;row<n;row++){

		int start=2*row;

		//spaces print karo

		for(int space=0;space<n-row-1;space++ ){

			cout<<"   ";

		}

		//number print karao 

		for(int num=0;num<row+1;num++){

			cout<<" "<<row+num+1<<" ";

			

		}

		//reversed number print karao

		for(int r=0;r<row;r++ ){

			cout<<" "<<start<<" ";

			start--;

		}

		cout<<endl;	

	}



	// pattern 28 numeric hollow pyramid :

	

	int n;

	cin>>n;

	

	for(int row=0;row<n;row++){

		//spaces

		for(int space=0;space<n-row-1;space++){

			cout<<" ";

		}

		//number with spaces

		int start=1;

		for(int col=0;col<2*row+1;col++){

			//first row or last row

			if(row==0 || row==n-1){

				if(col%2==0){

					cout<<start;

					start++;

				}

				else{

					cout<<" ";

				}

			}

			else{

				if(col==0){

					cout<<1;

				}

				else if(col==2*row+1-1){

					cout<<row+1;

				}

				else{

					cout<<" ";

				}

			}

		}cout<<endl;

	}

	int a=0;

	for(int row=0;row<4;row++){

		for(int c=0;c<2*row+1;c++){

			if(c%2!=0){

				cout<<" * ";

			}

			else{

				cout<<" "<<++a<<" ";

			}



		

	}

		cout<<endl;

	}*/
	return 0;
}