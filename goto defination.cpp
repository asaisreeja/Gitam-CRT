// GOTO:
it is a jumping statement.
it is derived into two types:
	1.forward labelling:
		syn:
			goto lablename:
				----------
				----------
				label:
					{
						// body of the lable
					}
	2.backward labelling:
		syn:
			lable:
				{
					//body
				}
			goto lable name
