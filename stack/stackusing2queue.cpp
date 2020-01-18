void QueueStack :: push(int x)
{
       q1.push(x);
}

/*The method pop which return the element poped out of the stack*/
int QueueStack :: pop()
{
    if(q1.empty()){
    	return -1;
    }       
    else
    while(q1.size()!= 1){
    	 int x = q1.front();
                q1.pop();
                q2.push(x);
            }
            
            int y = q1.front();
            q1.pop();
            swap(q1,q2);
            
            return y;
            
        }
