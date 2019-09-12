Function to convert number to string

Analysis of numbers

one two three four five six seven eight nine ten

eleven twelve thirteen fourteen fifteen sixteen seventeen eighteen nineteen twenty

twenty thirty forty fifty sixty seventy eighty ninety hundred 

thousand million billion trillion 

array of first twenty words 
[one, two three four five six seven eight nine ten eleven twelve thirteen fourteen fifteen sixteen seventeen eighteen nineteen twenty

array of tens 
[ten, twenty, thirty .....]

array of orders
[hundred, thousand, hundred thousand, million, billion, trillion, ]

how to handle each numeric place
1, 111,111,111 
10 987 654 3210
One billion, One hundred eleven million, One Hundred Eleven Thousand, One Hundred Eleven
10  order    9   order   87     order    6   order   54     order     3   order   21

13  12       11  10      9      8        7   6       5      4         3   2       1 
indices
for last two places, use hundred function

pseudo code for conversion

counter
strings t1 to tn initialized as empty;
for int i in range length of number
	if length >= 2  t1 = last two digits converted;
				else 
			t1 = one digit converted and return 
	if length >= 3  t2 = order hundred
			t3 = array of twenty 
	if length >= 4  t4 = order thousand
	if length >= 5  t5 = two digits converted 
				else 
			t5 = one digit converted and return
	if number >= 6  t6 = order hundred
			t7 = array of twenty
	if number >= 7  t8 = order million
	if number >= 8  t9 = two digits converted
				else
			t9 = one digit converted and returned
	if number >= 9  t10 = hundred order
			t11 = array of twenty	
	if number >=10  t12 = billion order
	if number >=11  t13 = two digits converted
				else
			t13 = one digit converted and returned
			

How to convert when number is less than hundred

one to nineteen in an array
ten to hundred is array 

rest have formula as tens array + ones array e.g. seventy four, twenty three 

Pseudo Code

array twenty[first nineteen numbers]

array tens[ten, twenty, thirty........]


if number < 20, index array 20

if number >= 20 , 
	convert type to string
	split into two characters
	first number indexes tens array id
	second digit indexes twenty array id




