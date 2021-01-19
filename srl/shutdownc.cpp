
#include <stdio.h>  //libraries
#include <stdlib.h> // system command libraries
  
int main() 
{ 
   //linux
   system("shutdown /s /t 1");//shutdown
   system("shutdown /r /t 1");//restart
   system("shutdown /l /t 1");//logout
   //windows
   system("c:\\windows\\system32\\shutdown /s");// shutdown 
   system("c:\\windows\\system32\\shutdown /r");//  restart
   system("c:\\windows\\system32\\shutdown /l");//  logout
    
   return 0; 
} 

