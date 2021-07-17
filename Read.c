Read()
{
	
	int i;
	long j;
	long f;
	char sint[20],j1[20];
	
	
	f= fopen("C:\\Users\\krish\\Documents\\VuGen\\Scripts\\fm.csv","r");
	
	if (f==NULL){
		lr_exit(2,LR_AUTO);
	}
	
	
	
//	while(!feof(f)){
//		
//		
//	j=fscanf(f,"%s %d",sint,&i);
//	
//	if (j==2){
//		lr_log_message("%d %s<--",i,sint);
//	}
//	}
//	
//	fclose(f);
	
	
	
	while(!feof(f)){
	j=fgets(sint,15,f);
	//lr_param_sprintf("LB","%s",j);
	sprintf(j1,"%s",j);
	
	lr_save_string(j1,"LB");
	
	lr_think_time(2);
	}
	fclose(f);
	
	return 0;
}
