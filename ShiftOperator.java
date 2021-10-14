class ShiftOperator {
    public static void main(String[] args){
   
		int a,b,i,j,n=7;
		a=2048*n;
		i=n<<11;
		System.out.println("Original = "+2048);
		System.out.println("Using shift 2048 * "+n +" = " +i);
		b=(1/512)*n;
		j=n>>11;
		System.out.println("\nOriginal = (1/512)");
		System.out.println("Using shift (1/512) * "+n +" = " +j);
	}
}
