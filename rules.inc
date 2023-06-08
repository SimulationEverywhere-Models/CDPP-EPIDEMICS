#BeginMacro(susceptible)
( trunc((0,0)/100) )
#EndMacro

#BeginMacro(infected)
( remainder( trunc((0,0)/10), 10 ) )
#EndMacro

#BeginMacro(recovered)
( remainder(trunc((0,0)), 10) )
#EndMacro

#BeginMacro(newS)
(round(
	(trunc((0,0)/100)) -
	( 1 * trunc((0,0)/100) * trunc(remainder( trunc((0,0)/10), 10 )) ) -
	(
		(trunc((0,0)/100)) * 
		( 
			(1*1*
				if(
				( remainder(trunc((if((0,1)!=?,(0,1),0))/10), 10)
				+ remainder(trunc((if((0,-1)!=?,(0,-1),0))/10), 10)
				+ remainder(trunc((if((1,0)!=?,(1,0),0))/10), 10)
				+ remainder(trunc((if((-1,0)!=?,(-1,0),0))/10), 10)
				+ remainder(trunc((if((1,1)!=?,(1,1),0))/10), 10)
				+ remainder(trunc((if((1,-1)!=?,(1,-1),0))/10), 10)
				+ remainder(trunc((if((-1,-1)!=?,(-1,-1),0))/10), 10)
				+ remainder(trunc((if((-1,1)!=?,(-1,1),0))/10), 10)
				)>0,1,0)
			)
		)
	)
))
#EndMacro

#BeginMacro(newI)
(round(
	((0) * trunc(remainder( trunc((0,0)/10), 10 )) ) + 
	( 1 * trunc((0,0)/100) * trunc(remainder( trunc((0,0)/10), 10 )) )+
	(
		(trunc((0,0)/100)) * 
		( 
			(1*1*
				if(
				( remainder(trunc((if((0,1)!=?,(0,1),0))/10), 10)
				+ remainder(trunc((if((0,-1)!=?,(0,-1),0))/10), 10)
				+ remainder(trunc((if((1,0)!=?,(1,0),0))/10), 10)
				+ remainder(trunc((if((-1,0)!=?,(-1,0),0))/10), 10)
				+ remainder(trunc((if((1,1)!=?,(1,1),0))/10), 10)
				+ remainder(trunc((if((1,-1)!=?,(1,-1),0))/10), 10)
				+ remainder(trunc((if((-1,-1)!=?,(-1,-1),0))/10), 10)
				+ remainder(trunc((if((-1,1)!=?,(-1,1),0))/10), 10)
				)>0,1,0)
			)
		)
	)	
))
#EndMacro

#BeginMacro(newR)
( remainder(trunc((0,0)), 10) + 1 * remainder( trunc((0,0)/10), 10 ) )
#EndMacro
