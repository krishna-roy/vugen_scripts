RandomAlphaNumer()
{
	int i,j,flag;
	char RandomAlphaNumeric[20];
	for(i=0;i<100;i++){
		strcpy(RandomAlphaNumeric,"");
		
		for(j=0;j<19;j++){
			flag=rand()%2;
			if (flag==0){
				
				RandomAlphaNumeric[j]=atoi(lr_eval_string("{RandChar}"));
			}
			
			else{
				RandomAlphaNumeric[j]=atoi(lr_eval_string("{RandNum}"))+'0';
			}
			
		}
		
		lr_log_message("%s",RandomAlphaNumeric);
		
		
		
		
		
	}
	
	
	return 0;
}
