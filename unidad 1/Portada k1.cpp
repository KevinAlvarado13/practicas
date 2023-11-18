				  	int a,b,c,d,e,suma,promedio;
                 	cout<<"hola aqui te voy adar tu promedio"<<endl;
	                 cout<<"ingresa el primer promedio"<<endl;
	                 cin>>a;
                   	cout<<"ingresa el segundo promedio"<<endl;
	                 cin>>b;
                  	cout<<"ingresa el tercer promedio"<<endl;
                  	cin>>c;
                 	cout<<"ingresa el cuarto promedio"<<endl;
                 	cin>>d;
	                 cout<<"ingresa el quinto promedio"<<endl;
                 	cin>>e;
                 	promedio = (a+b+c+d+e)/5;
	                 cout<<"tu promedio general es es de:"<<promedio<<endl;
	                 if(promedio >=7){
	                 	cout<<"tu calificacion es aprobatoria"<<endl;
					 }
					 else{
					 	cout<<"lo lamento tu promedio no es aprobado";
					      }
					      cout<<"gracias por preguntarme por tu promedio";
					      return 0;
					      break;
					      case 3:{
						  {
							printf(" Escuela Conalep Nucalpan 1.\n");
							printf(" Modulo Programacion basica.\n");
							printf(" Maestro Jose Luis Chavez Gomez.\n");
							printf(" Carrera tecnico en bachiller en informatica.\n");
							printf(" Grupo 305.\n");
							printf(" Tercer semestre de bachillerato.\n");
							printf(" Edad 16 anos.\n");
							
							return 0;
							
							}
							break;
						  }
						  case 4:{
						  	{
						  	char letra1;
						  	cout<<"Ingresa una letra";
						  	cin>>letra1;
						  	if(letra1 =='a'){
						  	cout<<"es vocal";
							  }
							  if(letra1 == 'e'){
							  	cout<<"es vocal";
							  }
							  if(letra1 == 'i'){
							  	cout<<"es vocal";
							  }
							  if(letra1 == 'o'){
							  	cout<<"es vocal";
							  }
							  if(letra1 == 'u'){
							  	 cout<<"es vocal";
							  }
							 else {
							 	cout<<"es consonante";
							 }
							 
							  }
							break;
						  }
						  case 5:{
						  	{
						  	int num1,num2,num3;
						  	cout<<"dame tu primer numero"<<endl;
						  	cin>>num1;
						  	cout<<"dame tu segundo numero"<<endl;
						  	cin>>num2;
						  	cout<<"dame tu tercer numero"<<endl;
						  	cin>>num3;
						  	
						  	if(num1==num2 and num2==num3){
						  	cout<<"tu triangulo equilatero";
							  }
							else if(num1==num2 and num2==num3){
							cout<<"tu triangulo es isoseles";
							}
							else if(num1 != num2 and num2 != num3){
							cout<<"tu triangulo es escaleno";
							}
							else{
								cout<<" no es un triangulo";
							}
							return 0;
							  }
							break;
						  }
						  case 6:{
						  	{
						  	int i;
						  	for(i=1;i<100;i++){
						  		cout<<i<<endl;
							  }
							  return 0;
							  }
							break;
						  }
						  case 7:{
						  	{
						  	int e;
						  	for(e=100;e>0;e--){
						  		cout<<e<<endl;
							  }
							  return 0;
							  }
							break;
						  }
						  case 8:{
						  	{
						  	int i;
						  	for(i=0;i<=100;i+=2){
						  		cout<<i<<endl;
							  }
							  return 0;
							  }
							break;
						  }
						  case 9:{
						   {
						 int i;
						for(i=1;i<=100;i+=2){
						  	cout<<i<<endl;
								  }
								  return 0;
							  }
							break;
						  }
						  case 10:{
						  	{
						  	int h = 0, m = 0, s = 0;
							while(1){
							if(s<=60){
							s = 0;
							m++;
							if(m>=60){
							m = 0;
							h++;
							 }
							 }
						     system("cls");
							cout<<h<<":"<<m<<":"<<s;
							Sleep(1000);
							 s++;
							  }
							 cin.get();
							  }
							break;
						  }
						   case 11:{
				         	{
						    int i;
						    int num;
						  	int multiplicacion;
						     cout<<"Inserta el numero de la tabla de multiplicar que deseas"<<endl;
						  	 cin>> num;
						  	 for(i=1;i<=50;i++){
						  	multiplicacion= num*i;
						  	cout<<num<<"x"<<i<<"="<<multiplicacion<<endl;
							   }
							return 0;
							  }
							break;
						  }
						  case 12:{
						  	{
						  	 int pro;
						  	 cout<<"Digita el numero del 1 al 7";
						  	 cin>> pro;
						  	 switch(pro){
						  	  case 1:
		                     cout<<"Hoy es lunes -_-";break;
		                     case 2:
	                      	cout<<"Hoy es martes";break;
	                     	case 3:
		                     cout<<"Hoy es miercoles";break;
	                      	case 4:
	                     	cout<<"Hoy es jueves";break;
	                     	case 5:
	                     	cout<<"Hoy es viernes :)";break;
		                     case 6:
		                     cout<<"Hoy es sabado";break;
	                      	case 7:
		                     cout<<"Hoy es domingo";break;
		                     default: cout<<"NO ES UN DIA DE LA SEMANA TONTO";break;
							   }
							   return 0;
							  }
							break;
						  }
						  
				  }
			}
	    }
		else{
		cout<<"No te saves la contraseña.Por favor digita bien la contraseña";
	
	}
   }
