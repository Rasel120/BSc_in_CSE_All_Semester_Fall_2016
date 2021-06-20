full_forward:-forward, handle_nots.
handle_nots:-rule(L,R), member(not(X),R), not(usedfact(X)),
	not(fact(X)),delete(not(X),R2),new_rule(L,R2), handle_nots.
handle_nots:-forward.
