 #include <iostream>
 using namespace std;
  int divide (int a, int b)
    {  
      return (a/b);
    }
      float divide (float a, float b)
       {  
       return (a/b);
       }
         int main ()
       { 
	    cout << "Nama : Sahrul Rojab \n";
    	cout << "Nim : 1855201092 \n";
    	cout << "Prodi : Teknik Informatika \n";
    	cout << "=============================== \n\n"; 
    	
         int x=5,y=2;  
         float n=5.0,m=2.0;
       cout << divide (x,y);  cout << "\n";  
       cout << divide (n,m);  cout << "\n"; 
     return 0; 
}
