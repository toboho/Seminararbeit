#include <iostream>
#include <cmath>


bool checkIfPrime(unsigned int x){
	if(x<2) return 0;
	unsigned int i=2;
	for(i;i<x;i++){
		if(x%i == 0){
			return 0;
		}
	}
	return 1;
}

int main(int argc, char const *argv[])
{
	int counter=0;
	for(unsigned int i=1;i<65536;i+=2){
		if(checkIfPrime(i)){
			counter++;
		}
	}
	std::cout << counter << std::endl; //Ausgabe 6492
	return 0;
}
/*
--------------------main---------------------
   0x000000000040085a <+0>:	push   %rbp
   0x000000000040085b <+1>:	mov    %rsp,%rbp
   0x000000000040085e <+4>:	sub    $0x20,%rsp
   0x0000000000400862 <+8>:	mov    %edi,-0x14(%rbp)
   0x0000000000400865 <+11>:	mov    %rsi,-0x20(%rbp)
   0x0000000000400869 <+15>:	movl   $0x6,-0x8(%rbp)
   0x0000000000400870 <+22>:	movl   $0x3,-0x4(%rbp)
   0x0000000000400877 <+29>:	mov    -0x4(%rbp),%eax
   0x000000000040087a <+32>:	add    %eax,-0x8(%rbp)
   0x000000000040087d <+35>:	movl   $0xf,-0xc(%rbp)
   0x0000000000400884 <+42>:	cmpl   $0xff,-0xc(%rbp)
   0x000000000040088b <+49>:	jg     0x4008bd <main+99>
   0x000000000040088d <+51>:	mov    -0xc(%rbp),%eax
   0x0000000000400890 <+54>:	mov    %eax,%edi
   0x0000000000400892 <+56>:	callq  0x400816 <_Z11checkNumberi>
   0x0000000000400897 <+61>:	test   %al,%al
   0x0000000000400899 <+63>:	je     0x4008b7 <main+93>
   0x000000000040089b <+65>:	mov    -0xc(%rbp),%eax
   0x000000000040089e <+68>:	mov    %eax,%esi
   0x00000000004008a0 <+70>:	mov    $0x601060,%edi
   0x00000000004008a5 <+75>:	callq  0x4006a0 <_ZNSolsEi@plt>
   0x00000000004008aa <+80>:	mov    $0x400700,%esi
   0x00000000004008af <+85>:	mov    %rax,%rdi
   0x00000000004008b2 <+88>:	callq  0x4006f0 <_ZNSolsEPFRSoS_E@plt>
   0x00000000004008b7 <+93>:	addl   $0x2,-0xc(%rbp)
   0x00000000004008bb <+97>:	jmp    0x400884 <main+42>
   0x00000000004008bd <+99>:	mov    $0x0,%eax
   0x00000000004008c2 <+104>:	leaveq 
   0x00000000004008c3 <+105>:	retq   
--------------------------------------------------------------------

-----------------------------function-------------------------------
   0x0000000000400816 <+0>:	push   %rbp
   0x0000000000400817 <+1>:	mov    %rsp,%rbp
   0x000000000040081a <+4>:	mov    %edi,-0x14(%rbp)
   0x000000000040081d <+7>:	cmpl   $0x1,-0x14(%rbp)
   0x0000000000400821 <+11>:	jg     0x40082a <_Z11checkNumberi+20>
   0x0000000000400823 <+13>:	mov    $0x0,%eax
   0x0000000000400828 <+18>:	jmp    0x400858 <_Z11checkNumberi+66>
   0x000000000040082a <+20>:	movl   $0x2,-0x4(%rbp)
   0x0000000000400831 <+27>:	mov    -0x4(%rbp),%eax
   0x0000000000400834 <+30>:	cmp    -0x14(%rbp),%eax
   0x0000000000400837 <+33>:	jge    0x400853 <_Z11checkNumberi+61>
   0x0000000000400839 <+35>:	mov    -0x14(%rbp),%eax
   0x000000000040083c <+38>:	cltd   
   0x000000000040083d <+39>:	idivl  -0x4(%rbp)
   0x0000000000400840 <+42>:	mov    %edx,%eax
   0x0000000000400842 <+44>:	test   %eax,%eax
   0x0000000000400844 <+46>:	jne    0x40084d <_Z11checkNumberi+55>
   0x0000000000400846 <+48>:	mov    $0x0,%eax
   0x000000000040084b <+53>:	jmp    0x400858 <_Z11checkNumberi+66>
   0x000000000040084d <+55>:	addl   $0x1,-0x4(%rbp)
   0x0000000000400851 <+59>:	jmp    0x400831 <_Z11checkNumberi+27> 
   0x0000000000400853 <+61>:	mov    $0x1,%eax
   0x0000000000400858 <+66>:	pop    %rbp
   0x0000000000400859 <+67>:	retq   
----------------------------------------------------------------------
*/