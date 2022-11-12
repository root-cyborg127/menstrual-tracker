#include<stdio.h>
#include<conio.h>

int main()
{
	int cycleLength,menstrualLength,mEnds,oPeriod,oEnd,A;
	int day,month,year;
	
	
	//BANNER 
	
printf("\t    __  __________   _________________  __  _____    __       __________  ___   ________ __ __________ \n\t   /  |/  / ____/ | / / ___/_  __/ __ \/ / / /   |  / /      /_  __/ __ \/   | / ____/ //_// ____/ __ \ \n\t  / /|_/ / __/ /  |/ /\__ \ / / / /_/ / / / / /| | / /     / / / /_/ / /| |/ /   / ,<  / __/ / /_/ / \n\t / /  / / /___/ /|  /___/ // / / _, _/ /_/ / ___ |/ /___     / / / _, _/ ___ / /___/ /| |/ /___/ _, _/ \n\t/_/  /_/_____/_/ |_//____//_/ /_/ |_|\____/_/  |_/_____/    /_/ /_/ |_/_/  |_\____/_/ |_/_____/_/ |_|  \n \t\n");
                                                                                                      
printf("\t\t\t\t\t v1.0\t\tDEVELOPED BY : VISHWAJITH SHAIJUKUMAR \n\n\n\n\n");
//printf("\t\t\t\t\t\tDEVELOPED BY : VISHWAJITH SHAIJUKUMAR \n\n\n\n\n");	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	printf("CYCLE TRACKER Step 1 : CYCLE LENGTH \n\n");
	printf("\tPLEASE ENTER THE NUMBER OF DAYS OF YOUR PREVIOUS CYCLE LASTED  :\t");
	scanf("%d",&cycleLength);
	
	printf("\n\n\n\n");
	
	
	printf("CYCLE TRACKER Step 2 : PERIOD LENGTH :\t");
	scanf("%d",&menstrualLength);
	
	
	printf("CYCLE TRACKER Step 3 : WHEN DID YOUR LAST PERIOD START ? : \t");
	scanf("%d""%d""%d",&day,&month,&year);
printf("\n\n\n\n");
//	mEnds = day + menstrualLength;
	
//	printf("END day is : %d",mEnds);
	day = day+ cycleLength;

	if(day>31){
	month+=1;
	day=day-31;
	}
		printf("<<=============================  YOUR NEXT PERIOD STARTS FROM : %d - %d -% d  =============================>>\n\n\n",day,month,year);
	
		mEnds = day + menstrualLength;
		if(day>31){
	month+=1;
	day=day-31;
	}
	 printf("<<=============================  YOUR PERIODS ENDS ON : %d-%d-%d  =============================>>\n\n\n",mEnds,month,year);
	 
		
	
	A = day + 10;
	
	oPeriod = A;
	
	if(A>31){
		A=A-31;
	month+=1;
	
	}
	printf("<<=============================  YOUR OVULATION STARTS ON : %d-%d-%d  =============================>>\n\n\n",A,month,year);
	
	oEnd = A + 6;
	
		

	
		if(A>31){
	month+=1;
	A=A-31;
	}
	
	printf("<<=============================  YOUR OVULATION ENDS ON : %d-%d-%d  =============================>>\n\n\n",oEnd,month,year);
	
	printf("\n\n\n");
	
	printf("Ask your doctor about any concerns or questions you may have about your menstrual experience for best results.");
	printf("\n");
	printf("For more information, visit WomensHealth.gov or GirlsHealth.gov for more facts about menstruation.");	
	return 0;
	
	
}





/*

    1. WHEN DID YOUR LAST PERIOD START ?

    2. HOW MANY DAYS DID YOUR LAST PERIOD LAST?

    3. HOW LONG IS YOUR CYCLE ?





*/

