member(X,[X|T]).
member(X,[H|T]):-member(X,T).
member(yolanda,[yolanda,trudy,vincent,jules]).
