#include <iostream>
#include <clocale>
#include <cmath>
#include <ctime>


using namespace std;



int main(){
	
	setlocale(LC_ALL, "Turkish");
	
	
    char saglik;
    char hafta;
    char calis;
    char saat;
    
    while(true){
	system("cls");
	time_t t = time(NULL);
	tm* timePtr = localtime(&t);
	
	
	cout<<"  ___________________________"<<endl;	
    cout<<" |                           |"<<endl;
	cout<<" |    Tarih  "<<(timePtr -> tm_mday)<<"/"<<(timePtr->tm_mon)+1 <<"/"<<(timePtr->tm_year)+1900<<"       |"<<endl;
	cout<<" |    Saat   "<<(timePtr ->tm_hour)<<":"<<(timePtr->tm_min)<<":"<<(timePtr->tm_sec)<<"         |"<<endl;
	cout<<" |___________________________|"<<endl;
	cout<<"  "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
    
        cout<<" ++++++++++++++++++++++++++++++"<<endl;
        cout<<" + COVID-19 KURALLARI MOTORU  +"<<endl;
        cout<<" ++++++++++++++++++++++++++++++"<<endl;
		cout<<" "<<endl;
        cout<<" "<<endl;
        
		saglik1:
		cout<<" Sa�l�kl� m�s�n ? (E/H)"<<endl;
        cin >> saglik;
        cout<<" "<<endl;
        
		
		if(saglik == 'H'|| saglik == 'h'){
		goto evdekal;
		
		
		}
		
		
		if(saglik == 'E'|| saglik =='e'){
        	cout<<" �al���yor musun ? (�zin belgen var mi ?) (E/H) "<<endl;
        	cin>>saglik;
        	cout<<" "<<endl;
		}
		
       
       
		  if(saglik== 'E'|| saglik =='e'){
			cout<<" ��e gitmelisiniz"<<endl;
			cin>>saglik;
			cout<<" "<<endl;
						
	
		}
		
		
 
	
		 
		 if(saglik =='H'||saglik =='h'){
         cout<<" Bug�n hafta i�i mi hafta sonu mu ? (�/S)"<<endl;
		 cin>>hafta;
		 cout<<" "<<endl;
		
    
        }
        
        else{
        	cout<<" Ge�ersiz Giri�"<<endl;
        	cout<<""<<endl;
        	goto saglik1;
		}
    
     
        
        if (hafta == '�' || hafta=='i'){
        	cout <<" Saat 21:00 ile  05:00 aras� m� ? (E/H)" <<endl;
        	cin>>hafta;
        	cout<<" "<<endl;
        	
		}
	
	 	 if(hafta =='S' || hafta=='s'){
        	goto evdekal;
			
		}
        
	 
    
	
     	
     	 
     	
		if(hafta== 'E' || hafta=='e'){
        	cout<<" Ya� aral���n 20-65 aras� m� ?  (E/H)"<<endl;
        	cin>>hafta;
        	cout<<" "<<endl;
		}
		
	
		
		if(hafta=='H'|| hafta=='h'){
			evdekal:
			cout<<" ______________ "<<endl;
			cout<<"|              |"<<endl;
			cout<<"|  Evde Kal !! |"<<endl;
			cout<<"|______________|"<<endl;
			cout<<" "<<endl;
		}
		
        
        if(hafta == 'E '|| hafta =='e'){
           
		cout<<"    _______________      "<<endl;
		cout<<"   |               |     "<<endl;
		cout<<"   | Gezebilirsin  |     "<<endl;
		cout<<"   |_______________|     "<<endl;
       	cout<<" "<<endl;
		}
		
	
           
return 0;

}
}
