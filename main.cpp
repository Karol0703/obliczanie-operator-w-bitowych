# include  < iostream >
# include  < fstream >
# include  < stdio.h >
# include  < stdlib.h >
# include  < string.h >

using  namespace  std ;

d³ugie  minimumZPliku (string nazwaPliku, int system)
{
  
  plik ifstream;
  
	char * endptr;
 	d³uga liczba, min;
 	string liczba1, liczba2; 
 	plik. open (nazwaPliku);
 	
 	bool pierwszy = prawda ;
 
 if (plik. good ())  
     while (! file. eof ())        
     {
               plik >> liczba1 >> liczba2;  
               liczba =   strtol (liczba2. c_str (), & endptr, system );
              
               if (pierwszy)
               {
                            min = liczba;
                            pierwszy = false ;
               }
               jeszcze 
                  if (liczba <min)
                       min = liczba; 
     }
  plik. close ();
  powrót min;
}

int  main ( int argc, char ** argv) {
	
	ofstream fileOut;
	fileOut. open ( " wynik.txt " );
	
	long min1 = minimumZPliku ( " dane_systemy1.txt " , 2 );
  	long min2 = minimumZPliku ( " dane_systemy2.txt " , 4 );
  	long min3 = minimumZPliku ( " dane_systemy3.txt " , 8 );
  	
  	fileOut << " Plik pierwszy min: " << min1 << " \ n " ;
  	fileOut << " Plik drugi min: " << min2 << " \ n " ;
  	fileOut << " Plik trzeci min: " << min3 << " \ n " ;
	
	fileOut. close ();
	return  0 ;
}

