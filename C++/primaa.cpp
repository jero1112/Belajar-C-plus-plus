int konversi_suhu(){
  cout << "         Konversi Suhu        " << endl;
  cout << "==================================" << endl;
  cout << endl;
 float celcius, atas, bawah;
 float reamur, fahreinhet, kelvin;
 
 
 cout<<"Masukkan derajat Celcius 1 : ";cin>>atas;
 cout<<"Masukkan derajat Celcius 2 : ";cin>>bawah;
 celcius+=atas;
 while (celcius>=atas){
 	while (celcius<=bawah){
 		reamur = 4.0/5.0 * celcius;
 		fahreinhet = 9.0/5.0 * celcius + 32;
 		kelvin = celcius + 273;
 
 		cout<<endl;
 		cout<<"Reamur     : "<<reamur<<endl;
 		cout<<"Fahreinhet : "<<fahreinhet<<endl;
 		cout<<"Kelvin     : "<<kelvin<<endl;
 		celcius++;
	 }
 } 
}
