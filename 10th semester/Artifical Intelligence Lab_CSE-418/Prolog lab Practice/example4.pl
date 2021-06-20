result(richard,3.5).
result(florence,3.6).
result(sabbir,3.8).
result(nabil,3.7).
get_result:-
	write("Enter Name"),nl,
	read(X),nl,
	result(X,Y),nl,
	write(Y).
