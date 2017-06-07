using System;

class Aula16_Calculadora_com_CSC

{
	
	
	public static void Main ()
	
	{
		int NumeroUm = 0;
		int NumeroDois = 0;
		
		
		Console.WriteLine ("Primeiro Numero");
		//atribui o que o usuario
		//digitou e faz um parse para int
		//parse serve para converter um tipo
		NumeroUm = int.Parse(Console.ReadLine());

		Console.WriteLine("O numero foi " + NumeroUm);
	}

}