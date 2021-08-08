Action()
{
	int i;
	char s[50];
	long f=NULL;
	
	lr_think_time(2);
	
	while (f==NULL){
	f= fopen("C:\\Users\\krish\\Documents\\VuGen\\Scripts\\Nw.txt","a");

		
	}
	
	strcpy(s,lr_eval_string("Virtual User {TimeStampNow} Iteration {IterationNumber}"));
	
	
		
		fprintf(f,"Iteration %s\n",s);
	
	
	fclose(f);
	
//	lr_save_searched_string();
	
	return 0;
}
