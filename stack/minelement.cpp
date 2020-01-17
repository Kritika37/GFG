int _stack :: getMin()
{
	if(s.empty())
	return -1;
	return s.top();
}

int _stack ::pop(){
	if(s.empty()){
	return -1;
}
else{
   int o = s.top();
   s.pop();
   if(!s.empty())
   minEle = s.top();
   return o;

}

}


void _stack::push(int x)
{
	if(s.empty()){
		minEle=INT_MAX;
    if(x < minEle)
    { minEle = x;
    s.push(x);
}
else{
    s.push(minEle);
}
}
}
