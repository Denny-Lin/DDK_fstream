#include<iostream>
#include<fstream.h>

using namespace std;
int main(){
   int j=0;
   char buffer[1000];
   fstream file;
   file.open("file.txt",ios::in);
   if(!file)
      cout<<"NO FILE\n";
   else{        
      file.getline(buffer,sizeof(buffer));
      for(int i=0;i<20;i++){ 
         if(buffer[i]=='\t')
            j++;                
         //cout<<buffer[i]<<"\n"; 
      }
      cout<<j;
      file.close(); 
   }
   system("pause");
   return 0;    
}
