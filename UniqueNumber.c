UniqueNumber()
{
	lr_save_param_regexp(lr_eval_string("{TimeStampNow}"),strlen(lr_eval_string("{TimeStampNow}")),"RegExp=(.*?)\\.","Ordinal=1","ResultParam=t1",LAST);
	
	lr_save_param_regexp(lr_eval_string("{TimeStampNow}"),strlen(lr_eval_string("{TimeStampNow}")),"RegExp=\\.(.*)","Ordinal=1","ResultParam=t2",LAST);
	
	lr_log_message("%s", lr_eval_string("{t1}{t2}"));
	return 0;
}
