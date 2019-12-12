#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
	double w1, w2, learningRate , threshold;
	int e[4];int x11;double Yd1;int Y11;
	int x22;bool userFlag=true;
	int x1[4]={0,0,1,1};
	int x2[4]={0,1,0,1};
	int Yd[4]={0,1,1,1};
	int Y[4];
	double Y1[4];
          static int counter=1;
	int i;
	int j;
	int k;
          static int epoch=1;
          static int Ecounter=0;
	string l;
	bool flag,stop;
	string space=" ";
           //---------------------------------------
         //cout<<"Please enter the w1 : ";
       //cin>>w1;
     //cout<<"\nPlease enter the w2 : ";
   //cin>>w2;
//cout<<"\nPlease enter the learning rate : ";
//cin>>learningRate;
//cout<<"\nPlease enter the Threshold : ";
//cin>>threshold;
//cout<<"\n";
w1=0.3;
w2=-0.1;
learningRate=0.1;
threshold=0.2;	
//---------------------------------------
cout<<"Epoch"<<"       "<<"Iteration"<<"       "<<"Inputs"<<"       "<<"Desired outputs"<<"       "<<"Initial weights"<<"       "<<"Actual outputs"<<"       "<<"Error"<<"       "<<"\n";
cout<<"     "<<"       "<<"         "<<"       "<<"x1  x2"<<"       "<<"       Yd      "<<"       "<<"w1      w2     "<<"       "<<"      Y       "<<"       "<<"  e  "<<"       "<<"\n";
//----------------------------------------
for(k=0;k<=9;k++){
	cout<<"-----------------------------------------------------------------------------------------------------------------\n";
	if ((counter-1)%4==0){
		cout<<"  "<<epoch;
	epoch++;
}
for(i=0;i<=3;i++){
		Ecounter=0;
	if((counter)>9){
	space="";
}
	if ((counter-1)%4==0){
	cout<<"             "<<counter<<"          "<<space<<x1[i]<<"   "<<x2[i]<<"               "<<Yd[i]<<"              "<<w1<<"     "<<w2<<"                "; }
	else{
	cout<<"                "<<counter<<"          "<<space<<x1[i]<<"   "<<x2[i]<<"               "<<Yd[i]<<"              "<<w1<<"     "<<w2<<"                ";	
	}
		counter++;
	Y1[i]=x1[i]*w1+x2[i]*w2-threshold;
	if(Y1[i]>=0)
	Y[i]=1;
	else{
	Y[i]=0;}
	if(w2==0){
		l="   ";
	}
	else if(w2>0){
		l=" ";
	}
    cout<<l<<Y[i]<<"                ";
	e[i]=Yd[i]-Y[i];
	cout<<e[i]<<"\n";
	if(e[i]!=0){
		w1=w1+learningRate*e[i]*x1[i];
		w2=w2+learningRate*e[i]*x2[i];	
	}
	for(j=0;j<=3;j++){
		if(e[j]==0){
		Ecounter++;
		if(Ecounter==4){
		stop=true;}	
}}
}
if(stop==true){
cout<<"-----------------------------------------------------------------------------------------------------------------\n";
cout<<"\nThe perceptron learned ^_^ now enter two inputs to give you the output else enter -1 to exit the program.\n\n";
break;}
}

while(userFlag==true){
cout<<"\nThe First input : ";
cin>>x11;
if(x11==-1){
	break;
}
cout<<"The Second input : ";
cin>>x22;
Yd1=x11*w1+x22*w2-threshold;
	if(Yd1>=0)
	Y11=1;
	else{
	Y11=0;}
cout<<"The output is : "<<Y11;
cout<<"\n\n";
cout<<"-----------------------------------------------------------------------------------------------------------------\n";
}
	return(0);
}

