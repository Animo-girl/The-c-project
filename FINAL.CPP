/*this program excepts the name and password creates the account and
 then diplays option of books then issues the book and gives back
 the date of return */
 #include<iostream.h>
 #include<string.h>
 #include<conio.h>
 #include<stdio.h>
 #include<fstream.h>
 void rules();        /*for rules*/
 void date();         /*for date procedure*/


 void rules()
 {

   cout<<"THE ISSUE PERIOD WILL BE FOR 7 DAYS ONLY\n";
   cout<<"You can re-issue the same book 3 times only\n";

 };
 /*the rules ends here*/

 void date()
{ int day,month,year,a,b,c,d,e,f,g,h,i,x,z,y;
   cout<<"Enter Today's date\n";
    cout<<"enter day\t";
    cin>>day;
    cout<<"enter month\t";
    cin>>month;
    cout<<"enter year\t";
    cin>>year;
    cout<<"The date of issue is "<<day<<"."<<month<<"."<<year<<"\n";
    if(month==1||month==3||month==5||month==7||month==8||month==10)
    {if(day>=25)
       {a=day+7;
	b=a%31;
	cout<<"The due date is "<<a<<"."<<month+1<<"."<<year;
       }
       else
       {c=day+7;
	cout<<"The due date is "<<c<<"."<<month<<"."<<year;
       }
    }

    else if(month==12)
    {if(day>=25)
       {g=day+7;
	h=g%31;
	cout<<"The due date is "<<h<<"."<<month+1<<"."<<year;
       }
       else
       {i=day+7;
	cout<<"The due date is "<<i<<".1"<<"."<<year+1;
       }
    }

    else if(month==2)
    {if(day>=23)
     {d=day+7;
      e=d%29;
      cout<<"the due date is "<<e<<"."<<month+1<<"."<<year;
     }
     else
     {f=day+7;
      cout<<"The due date is "<<f<<"."<<month<<"."<<year;
     }

    }

    else
  {
    if(day>=24)
    { z=day+7;
      y=z%30;
     cout<<"The due date is "<<y<<"."<<month+1<<"."<<year;
    }
    else
    { x=day+7;
     cout<<"The due date is "<<x<<"."<<month<<"."<<year;
    }
 }


};
//the date section

 class option
 {
   public:
   int opt1,opt2,opt3,opt4,opt5,opt6,opt7,opt8,opt9,opt10,opt11,opt12,opt13,opt14,opt15,opt16,opt17,opt18,opt19,opt20,opt21,opt22,opt23,opt24,opt25,opt26;
    //option declaration
    FILE *fptr;

    fptr=fopen("C:\imp.rec","w");
    if(fptr==NULL)
    {printf("File does not exists\n");
    return;
    }
    else
   {

   option()   //a constructor
  {
   clrscr();
   cout<<"From which class you belong to ?\n";
   cout<<"1]FYIT\n\n2]FYCS\n\n";
   cin>>opt1;  //choosing the class



   switch(opt1)                      //for fyit
   {
     case 1:

     cout<<"You belong to FYIT class\n";
     cout<<"These are your subjects\n";
     cout<<"1]IMPERATIVE PROGRAMMING\n2]DIGITAL ELECTRONICS\n3]DISCRETE MATHEMATICS\n4]OPERATING SYSTEMS\n5]CUMMUNICATION SKILLS\n6]OBJECT OREINTED PROGRAMMING\n7]MICROPROCESSORS AND MICROCONTROLLER\n8]MATHEMATICS\n9]GREEN TECHNOLOGY\n10]WEB PROGRAMMING\n";
     cout<<"\nchoose any one of them:\t";        //the subjects
     cin>>opt2;

     switch(opt2)
     {case 1:

      cout<<"THE BOOKS AVAILABLE FOR IMPERATIVE PROGRAMMING ARE:-\n";
      cout<<"1]TECH MAX\n2]VIPUL PUBLICATIONS\n3]SHETH\n4]BRYON GOTTFRIED\n5]ANSI C:-BALAGURU SWAMI\n";
      cin>>opt4;
      switch(opt4)
      { case 1:
	cout<<"THE BOOK FOR C PROGRAMMING TECH MAX HAS BEEN RENEWED\n";
	break;

	case 2:
	cout<<"THE BOOK FOR C PROGRAMMING VIPUL PUBLICATIONS HAS BEEN RENEWED\n";
	break;

	case 3:
	cout<<"THE BOOK FOR C PUBLICATIONS SHETH PUBLICATIONS\n";
	break;

	case 4:
	cout<<"THE BOOK FOR C PROGRAMMING BRYON GOTTFRIED HAS BEEN ISSUED\n";
	break;

	case 5:
	cout<<"THE BOOK FOR C PROGRAMMING BALAGURU SWAMI HAS BEEN ISSEUD\n";
	break;
      }
      break;   /*the first subject*/


      case 2:
      cout<<"THE FOLLOWING BOOKS ARE AVAILABLE FOR THIS SUBJECT:-\n";
      cout<<"1]TECH MAX\n2]VIPUL PUBLICATIONS\n3]SHETH\n";
      cin>>opt5;
      switch(opt5)
     { case 1:
       cout<<"THE BOOK FOR DIGITAL ELECTRONICS TECH MAX HAS BEEN RENEWED\n";
       break;

       case 2:
       cout<<"THE BOOK FOR DIGITAL ELECTRONICS VIPUL PUBLICATIONS HAS BEEN RENEWED\n";
       break;

       case 3:
       cout<<"THE BOOK FOR DIGITAL ELECTRONICS SHETH PUBLICATIONS\n";
       break;
     }
     break;   /*the third subject*/


     case 3:

     cout<<"THE FOLLOWING BOOKS ARE AVAILABLE FOR THIS SUBJECT:-\n";
     cout<<"1]TECH MAX\n2]VIPUL PUBLICATIONS\n3]SHETH\n4]BOOK FOR DISCRETE MATHEMATICS SUSSANA\n ";
     cin>>opt6;
     switch(opt6)
     {
      case 1:
      cout<<"THE BOOK FOR DISCRETE MATHEMATICS TECH MAX HAS BEEN RENEWED\n";
      break;

      case 2:
      cout<<"THE BOOK FOR DISCRETE MATHEMATICS VIPUL PUBLICATIONS HAS BEEN RENEWED\n";
      break;

      case 3:
      cout<<"THE BOOK FOR DISCRETE MATHEMATICS SHETH\n";
      break;

      case 4:
      cout<<"THE BOOK FOR DISCRETE MATHEMATICS \"BOOK FOR DICRETE MATHEMATICS SUSSANA\" HAS BEEN ISSUED\n";
      break;
   }
   break;      /*the 4th subject*/


   case 4:

   cout<<"THE FOLLOWING BOOKS ARE AVAILABLE FOR THIS SUBJECT:-\n";
   cout<<"1]TECH MAX\n2]VIPUL PUBLICATIONS\n3]SHETH\n";
   cout<<"ENTER YOUR OPTION\n";
   cin>>opt7;

    switch(opt7)
    {case 1:

	 cout<<"THE BOOK FOR operating system TECH MAX HAS BEEN RENEWED\n";
	 break;

    case 2:

    cout<<"THE BOOK FOR operating system VIPUL PUBLICATIONS HAS BEEN RENEWED\n";
    break;

    case 3:
    cout<<"THE BOOK FOR operating system SHETH\n";
    break;
   }
   break;   /*the 5th one*/


   case 5:
   cout<<"THE FOLLOWING BOOKS ARE AVAILABLE FOR THIS SUBJECT:-\n";
   cout<<"1]TECH MAX\n2]VIPUL PUBLICATIONS\n3]SHETH\n";
   cout<<"enter your option\n";
   cin>>opt8;

   switch(opt8)
   {case 1:
    cout<<"THE BOOK FOR COMUNICATION SKILLS TECH MAX HAS BEEN RENEWED\n";
    break;

	case 2:
    cout<<"THE BOOK FOR  COMUNICATION SKILLS VIPUL PUBLICATIONS HAS BEEN RENEWED\n";
    break;

    case 3:
    cout<<"THE BOOK FOR COMUNICATION SKILLS SHETH\n";
    break;
   }
   break; /*the 6th one*/


    case 6:
    cout<<"THE FOLLOWING BOOKS ARE AVAILABLE FOR THIS SUBJECT:-\n";
    cout<<"1]TECH MAX\n2]VIPUL PUBLICATIONS\n3]SHETH\n4]YASHAWANT KANETKAR\n";
    cout<<"enter your option\n";
    cin>>opt9;
	switch(opt9)
   { case 1:
    cout<<"THE BOOK FOR OBJECT ORIENTED PROGRAMMING TECH MAX HAS BEEN RENEWED\n";
    break;

	case 2:
    cout<<"THE BOOK FOR OBJECT ORIENTED PROGRAMMING VIPUL PUBLICATIONS HAS BEEN RENEWED\n";
    break;

    case 3:
    cout<<"THE BOOK FOR OBJECT ORIENTED PROGRAMMING SHETH\n";
    break;

    case 4:
    cout<<"THE BOOK FOR OBJECT ORIENTED PROGRAMMINGYASHAWANT KANETKAR C MADE EASY\n";
    break;
   }
   break;      /*the 7th one*/


   case 7:
    cout<<"THE FOLLOWING BOOKS ARE AVAILABLE FOR THIS SUBJECT:-\n";
    cout<<"1]TECH MAX\n2]VIPUL PUBLICATIONS\n3]SHETH\n";
    cout<<"enter your option\n";
    cin>>opt10;
    switch(opt10)
   { case 1:
    cout<<"THE BOOK FOR MICROPROCESSOR AND MICROCONTROLLER TECH MAX HAS BEEN RENEWED\n";
    break;

    case 2:
    cout<<"THE BOOK FOR MICROPROCESSOR AND MICROCONTROLLER VIPUL PUBLICATIONS HAS BEEN RENEWED\n";
    break;

    case 3:
    cout<<"THE BOOK FOR MICROPROCESSOR AND MICROCONTROLLER SHETH\n";
    break;

   }
   break;                     /*the 8th one*/

   case 8:
    cout<<"THE FOLLOWING BOOKS ARE AVAILABLE FOR THIS SUBJECT:-\n";
    cout<<"1]TECH MAX\n2]VIPUL PUBLICATIONS\n3]SHETH\n";
    cout<<"enter your option";
    cin>>opt11;
	switch(opt11)
	{
   case 1:
    cout<<"THE BOOK FOR MATHEMATICS MAX HAS BEEN RENEWED\n";
    break;

    case 2:
    cout<<"THE BOOK FOR MATHEMATICS VIPUL PUBLICATIONS HAS BEEN RENEWED\n";
    break;

    case 3:
    cout<<"THE BOOK FOR MATHEMATICS SHETH\n";
    break;
   }
   break;  /*the 8th one*/


   case 9:
    cout<<"THE FOLLOWING BOOKS ARE AVAILABLE FOR THIS SUBJECT:-\n";
    cout<<"1]TECH MAX\n2]VIPUL PUBLICATIONS\n3]SHETH\n";
    cout<<"enter your option\n";
    cin>>opt12;
	switch(opt12)
	{

	case 1:
    cout<<"THE BOOK FOR GREEN TECHNOLOGY TECH MAX HAS BEEN RENEWED\n";
    break;

    case 2:
    cout<<"THE BOOK FOR GREEN TECHNOLOGY VIPUL PUBLICATIONS HAS BEEN RENEWED\n";
    break;

    case 3:
    cout<<"THE BOOK FOR GREEN TECHNOLOGY SHETH\n";
    break;
   }
   break;                 /*the 9th one*/

   case 10:

    cout<<"THE FOLLOWING BOOKS ARE AVAILABLE FOR THIS SUBJECT:-\n";
    cout<<"1]TECH MAX\n2]VIPUL PUBLICATIONS\n3]SHETH\n";
    cout<<"enter your option\n";
    cin>>opt13;
    switch(opt13)
	{
	case 1:
    cout<<"THE BOOK FOR WEB PROGRAMMING TECH MAX HAS BEEN RENEWED\n";
    break;

    case 2:
    cout<<"THE BOOK FOR WEB PROGRAMMING VIPUL PUBLICATIONS HAS BEEN RENEWED\n";
    break;

    case 3:
    cout<<"THE BOOK FOR WEB PROGRAMMING SHETH\n";
    break;
    }



  break;
 }
 break;
  /*cas 1 over*/


     case 2:
     cout<<"YOU BELONG TO FYCS CLASS\n";
     cout<<"These are your subjects\n";
     cout<<"1]COMPUTER ORGANIZATION\n2]DATABASE MANAGEMENT SYSTEM\n3]PYTHON\n4]FREE & OPEN SOURCE SOFTWARE\n5]MATHAMATICS\n6]STATISTICS\n7]SOFT SKILLS\n8]C PROGRAMMING\n9]DATA STRUCTURE\n10]GREEN TECHNOLOGY\n11]PYTHON 2\n12]MATHEMATICS\n13]STATISTICS\n14]LINUX";

     cout<<"\n\nEnter your option:\t";
     cin>>opt13;         /*for fycs subject*/
	 switch(opt13)
	 {case 1:
     cout<<"The books available are\n";
     cout<<"1]TECH MAX\n2]VIPUL PUBLICATIONS\n3]SHETH\n";
     cin>>opt14;
     switch(opt14)
	 {case 1:
     cout<<"THE BOOK FOR COMPUTER ORGANIZATION TECH MAX HAS BEEN RENEWED\n";
     break;
     case 2:
     cout<<"THE BOOK FOR COMPUTER ORGANIZATION VIPUL PUBLICATIONS HAS BEEN RENEWED\n";
     break;
     case 3:
     cout<<"THE BOOK FOR COMPUTER ORGANIZATION SHETH\n";
     break;
	 }
	 break;                              /*the first subject*/
	 case 2:
	 cout<<"\nTHE BOOKS AVAILABLE FOR DATABASE MANAGEMANT ARE\n";
     cout<<"1]TECH MAX\n2]VIPUL PUBLICATIONS\n3]SHETH\n";
     cin>>opt11;
	 switch(opt11)
     {case 1:
      cout<<"THE BOOK FOR DATABASE MANAGEMENT TECH MAX HAS BEEN RENEWED\n";
      break;

     case 2:
     cout<<"THE BOOK FOR DATABASE MANAGEMENT VIPUL PUBLICATIONS HAS BEEN RENEWED\n";
     break;

     case 3:
     cout<<"THE BOOK FOR DATABASE MANAGEMENT SHETH\n";
     break;

	 }
	 break;           /* the second subject*/

	 case 3:
	 cout<<"\nTHE BOOKS AVAILABLE FOR PYTHON PROGRAMMING ARE\n";
     cout<<"1]TECH MAX\n2]VIPUL PUBLICATIONS\n3]SHETH\n";
     cin>>opt12;
     switch(opt12)
	  {case 1:
       cout<<"THE BOOK FOR PYTHON PROGRAMMING TECH MAX HAS BEEN RENEWED\n";
       break;
       case 2:
       cout<<"THE BOOK FOR PYTHON PROGRAMMING VIPUL PUBLICATIONS HAS BEEN RENEWED\n";
       break;
       case 3:
       cout<<"THE BOOK FOR PYTHON PUBLICATIONS SHETH PUBLICATIONS\n";
       break;
      }
     break;                 /*the 3rd one*/

	 case 4:
		  cout<<"\nTHE BOOKS AVAILABLE FOR FREE AND OPEN SOURCE SOFTWARE ARE\n";
	      cout<<"1]TECH MAX\n2]VIPUL PUBLICATIONS\n3]SHETH\n";
	      cin>>opt13;
		  switch(opt13)
		 {case 1:
		  cout<<"THE BOOK FOR  FREE AND OPEN SOURCE SOFTWARE TECH MAX HAS BEEN RENEWED\n";
		  break;
		  case 2:
		  cout<<"THE BOOK FOR  FREE AND OPEN SOURCE SOFTWARE VIPUL PUBLICATIONS HAS BEEN RENEWED\n";
		   break;
		   case 3:
		  cout<<"THE BOOK FOR  FREE AND OPEN SOURCE SOFTWARE SHETH PUBLICATIONS\n";
		  break;
		 }
       break;                              /*the 4th one*/

	 case 5:
		  cout<<"\nTHE BOOKS AVAILABLE FOR MATHEMATICS ARE\n";
	      cout<<"1]TECH MAX\n2]VIPUL PUBLICATIONS\n3]SHETH\n";
	      cin>>opt14;
		      switch(opt14)
	     {case 1:
	      cout<<"THE BOOK FOR MATHEMATICS TECH MAX HAS BEEN RENEWED\n";
	      break;
	      case 2:
	      cout<<"THE BOOK FOR MATHEMATICS VIPUL PUBLICATIONS HAS BEEN RENEWED\n";
	      break;
	      case 3:
	      cout<<"THE BOOK FOR MATHEMATICS SHETH PUBLICATIONS\n";
	      break;
		 }
	 break;                          /*the 5th one*/
	  case 6:
		 cout<<"\nTHE BOOKS AVAILABLE FOR STATISTICS ARE\n";
	      cout<<"1]TECH MAX\n2]VIPUL PUBLICATIONS\n3]SHETH\n";
	      cin>>opt15;
			  switch(opt15)
		{ case 1:
		 cout<<"THE BOOK FOR  STATISTICS TECH MAX HAS BEEN RENEWED\n";
		 break;
		 case 2:
		 cout<<"THE BOOK FOR  STATISTICS VIPUL PUBLICATIONS HAS BEEN RENEWED\n";
		 break;
		 case 3:
		 cout<<"THE BOOK FOR  STATISTICS SHETH PUBLICATIONS\n";
		 break;
	     }
     break;                         /*the 6th one*/

      case 7:

	      cout<<"\nTHE BOOKS AVAILABLE FOR SOFT SKILLS ARE\n";
	      cout<<"1]TECH MAX\n2]VIPUL PUBLICATIONS\n3]SHETH\n";
	      cin>>opt16;
			  switch(opt16)
	     {case 1:
	      cout<<"THE BOOK FOR SOFT SKILLS TECH MAX HAS BEEN RENEWED\n";
	      break;
	      case 2:
	      cout<<"THE BOOK FOR SOFT SKILLS VIPUL PUBLICATIONS HAS BEEN RENEWED\n";
	      break;
	      case 3:
	      cout<<"THE BOOK FOR SOFT SKILLS SHETH PUBLICATIONS\n";
	      break;


	    }
		break;       /*the 7th one*/
     case 8:
	      cout<<"\nTHE BOOKS AVAILABLE FOR C PROGRAMMING ARE\n";
	      cout<<"1]TECH MAX\n2]VIPUL PUBLICATIONS\n3]SHETH\n4]BRYON GOTTFRIED\n5]ANSI C:-BALAGURU SWAMI\n";
	      cin>>opt17;
			  switch(opt17)
			 {case 1:
	      cout<<"THE BOOK FOR C PROGRAMMING TECH MAX HAS BEEN RENEWED\n";
	      break;
	      case 2:
	      cout<<"THE BOOK FOR C PROGRAMMING VIPUL PUBLICATIONS HAS BEEN RENEWED\n";
	      case 3:
	      cout<<"THE BOOK FOR C PUBLICATIONS SHETH PUBLICATIONS\n";
	      break;

	     case 4:
	     cout<<"THE BOOK FOR C PROGRAMMING BRYON GOTTFRIED HAS BEEN ISSUED\n";
	     break;
			 case 5:
	     cout<<"THE BOOK FOR C PROGRAMMING BALAGURU SWAMI HAS BEEN ISSEUD\n";
			 break;


	     }
     break;         /*the 8th one*/

     case 9:

	      cout<<"\nTHE BOOKS AVAILABLE DATA STRUCTURE ARE\n";
	      cout<<"1]TECH MAX\n2]VIPUL PUBLICATIONS\n3]SHETH\n";
	      cin>>opt18;
	      switch(opt18)
			 {case 1:
	      cout<<"THE BOOK FOR DATA STRUCTURE TECH MAX HAS BEEN RENEWED\n";
	      break;
	      case 2:
	      cout<<"THE BOOK FOR DATA STRUCTURE VIPUL PUBLICATIONS HAS BEEN RENEWED\n";
	      break;
	      case 3:
	      cout<<"THE BOOK FOR DATA STRUCTURE SHETH PUBLICATIONS\n";
	      break;
	     }
		break;             /*the 9th one*/

    case 10:

	     cout<<"\nTHE BOOKS AVAILABLE FOR GREEN TECHNOLOGY ARE\n";
	     cout<<"1]TECH MAX\n2]VIPUL PUBLICATIONS\n3]SHETH\n";
	     cin>>opt19;
			 switch(opt19)
			{case 1:
	     cout<<"THE BOOK FOR GREEN TECHNOLOGY MAX HAS BEEN RENEWED\n";
			 break;
			 case 2:
		     cout<<"THE BOOK FOR GREEN TECHNOLOGY VIPUL PUBLICATIONS HAS BEEN RENEWED\n";
			 break;
			 case 3:

	     cout<<"THE BOOK FOR GREEN TECHNOLOGY SHETH PUBLICATIONS\n";
			 break;
			}
	       break;                /*the 10th one*/


   case 11:
	     cout<<"\nTHE BOOKS AVAILABLE FOR PYTHON 2 ARE\n";
	     cout<<"1]TECH MAX\n2]VIPUL PUBLICATIONS\n3]SHETH\n";
	     cin>>opt20;
			 switch(opt20)
	     { case 1:
	       cout<<"THE BOOK FOR PYTHON 2 TECH MAX HAS BEEN RENEWED\n";
	       break;
	       case 2:
	       cout<<"THE BOOK FOR PYTHON 2 VIPUL PUBLICATIONS HAS BEEN RENEWED\n";
	       break;
	       case 3:
			   cout<<"THE BOOK FOR PYTHON 2 SHETH PUBLICATIONS\n";
	       break;

	     }
			 break;           /*the 11th one*/
   case 12:
	  cout<<"\nTHE BOOKS AVAILABLE FOR MATHEMATICS ARE\n";
	  cout<<"1]TECH MAX\n2]VIPUL PUBLICATIONS\n3]SHETH\n";
	  cin>>opt21;
		  switch(opt21)
	 { case 1:
	   cout<<"THE BOOK FOR MATHEMATICS TECH MAX HAS BEEN RENEWED\n";
	   break;
		   case 2:
	   cout<<"THE BOOK FOR MATHEMATICS VIPUL PUBLICATIONS HAS BEEN RENEWED\n";
	   break;
	   case 3:
	   cout<<"THE BOOK FOR MATHEMATICS SHETH PUBLICATIONS\n";
	   break;
	  }
    break;                           /*the 12th one*/

   case 13:
	  cout<<"\nTHE BOOKS AVAILABLE FOR STATISTICS ARE\n";
	  cout<<"1]TECH MAX\n2]VIPUL PUBLICATIONS\n3]SHETH\n";
	  cin>>opt22;
	  switch(opt22)
		 {case 1:
	  cout<<"THE BOOK FOR STATISTICS TECH MAX HAS BEEN RENEWED\n";
	  break;
	 case 2:
		 cout<<"THE BOOK FOR STATISTICS VIPUL PUBLICATIONS HAS BEEN RENEWED\n";
		 break;
	 case 3:
	 cout<<"THE BOOK FOR STSTISTICS SHETH PUBLICATIONS\n";
	 break;
	}
	break;                           /*the 13th one*/

   case 14:
	   cout<<"\nTHE BOOKS AVAILABLE FOR LINUX ARE\n";
	   cout<<"1]TECH MAX\n2]VIPUL PUBLICATIONS\n3]SHETH\n";
	   cin>>opt23;
	   switch(opt23)
	  {case 1:
		   cout<<"THE BOOK FOR LINUX TECH MAX HAS BEEN RENEWED\n";
	   break;
		   case 2:
	   cout<<"THE BOOK FOR LINUX VIPUL PUBLICATIONS HAS BEEN RENEWED\n";
	   break;
	   case 3:
	   cout<<"THE BOOK FOR LINUX SHETH PUBLICATIONS\n";
	   break;
		   }
	 break;
 }                                                       /*the 14th one*/
 break;
}
}
}


};
   void main()
   {FILE *fptr;
    char x[20],y[20];
    char id[20],pass[20];
    clrscr();
    fptr=fopen("C:\imp.rec","w");
    if(fptr==NULL)
    {printf("File does not exists\n");
    return;
    }
    else
    {textcolor(2);
    gotoxy(30,5);
    cout<<"Welcome to our library\n";
    cout<<"To create a new account do the following transactions\n";
    cprintf("PLZ ENTER YOUR NAME(this will be your id)\n");
    cin>>id;
    fprintf(fptr,"Id=%s\n",id);
    cprintf("\nEnter your password\n");
    cin>>pass;
    fprintf(fptr,"Password=%s\n",pass);
    cprintf("ID generated successfully!!\n");
    cprintf("And the password is ");
    cout<<pass;
    getch();
    clrscr();
    cout<<"Enter id\n";
    cin>>x;
    cout<<"Enter password\n";
    cin>>y;
    if(strcmp(x,id)==0 && strcmp(y,pass)==0)
    { cout<<"CONGRATULATIONS YOU HAVE LOGGED IN SUCESSFULLY\n" ;
      cout<<"press enter to continue!!\n";
      getch();

      rules();
      getch();
	  option a;
       getch();
      date();
      getch();
   }

   else
   {cout<<"\t\tSORRY WE ARE NOT ABLE TO DO LOGIN EITHER YOUR ID OR PASSWORD IS INCORRECT!!!\n";
   getch();
   }
  fclose(fptr);
 }
}
