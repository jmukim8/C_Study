	float f1,f2,f3;
	float b,m,s;
	printf("실수 3개를 입력 하세요 : ");
	scanf("%f %f %f",&f1,&f2,&f3);
	
	if(f1<f2){
		if(f1<f3){
			if(f2<f3){
			s=f1;	m=f2;	b=f3;	
			}else{
			s=f1; 	m=f3;  b=f2;	
			}		
		}else{
			s=f3; 	m=f1; 	b=f2;	
		}
	} else {
		if(f2<f3){
			if(f1<f3){
				s=f2; 	m=f1;  b=f3;
			}else{
				s=f2; 	m=f3;  b=f1;
			}
		}else{
			s=f3;
			m=f2;
			b=f1;
		}
	}
	printf("%f %f %f\n",b,m,s);

	return 0;
}
//42페이지,1-5
