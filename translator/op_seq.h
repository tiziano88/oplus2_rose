/*

Copyright (c) 2010, Mike Giles
All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

    * Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
    * The name of Mike Giles may not be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/


// 
// auto-generated by op_seq_gen.m on 08-Apr-2010 21:45:45 
//

//                                                                                       
// headers                                                                               
//                                                                                       
                                                                                         
#include <stdlib.h>                                                                      
#include <stdio.h>                                                                       
#include <string.h>                                                                      
#include <math.h>                                                                        
#include "op_datatypes.h"                                                                
                                                                                         
//                                                                                       
// op routine declarations                                                               
//

void op_init(int, char **);                                                              

template <class T>                                                             
void op_fetch_data(op_dat<T>);                                                              
                                                                                         
void op_diagnostic_output();                                                             
                                                                                         
//                                                                                       
// op_par_loop routine for 2 arguments                                                   
//                                                                                       
                                                                                         
template < class T0, class T1 >
float op_par_loop_2(void (*kernel)( T0*, T1* ),
  op_set set,                                                         
  op_dat<T0> *arg0 ,int idx0 ,op_ptr *ptr0 ,op_access acc0 ,          
  op_dat<T1> *arg1 ,int idx1 ,op_ptr *ptr1 ,op_access acc1){
	return 0;
}                                                                                               
                                                                                         
//                                                                                       
// op_par_loop routine for 3 arguments                                                   
//                                                                                       
                                                                                         
template < class T0, class T1, class T2 >
float op_par_loop_3(void (*kernel)( T0*, T1*, T2* ),
  op_set set,                                                         
  op_dat<T0> *arg0 ,int idx0 ,op_ptr *ptr0 ,op_access acc0 ,          
  op_dat<T1> *arg1 ,int idx1 ,op_ptr *ptr1 ,op_access acc1 ,
  op_dat<T2> *arg2 ,int idx2 ,op_ptr *ptr2 ,op_access acc2){
	return 0;
}                                                                                        
                                                                                         
//                                                                                       
// op_par_loop routine for 4 arguments                                                   
//                                                                                       
                                                                                         
template < class T0, class T1, class T2, class T3 >
float op_par_loop_4(void (*kernel)( T0*, T1*, T2*, T3* ),
  op_set set,                                                         
  op_dat<T0> *arg0 ,int idx0 ,op_ptr *ptr0 ,op_access acc0 ,          
  op_dat<T1> *arg1 ,int idx1 ,op_ptr *ptr1 ,op_access acc1 ,
	op_dat<T2> *arg2 ,int idx2 ,op_ptr *ptr2 ,op_access acc2 ,
  op_dat<T3> *arg3 ,int idx3 ,op_ptr *ptr3 ,op_access acc3){
	return 0;
}                                                                                        
                                                                                         
//                                                                                       
// op_par_loop routine for 5 arguments                                                   
//                                                                                       
                                                                                         
template < class T0, class T1, class T2, class T3, class T4 >
float op_par_loop_5(void (*kernel)( T0*, T1*, T2*, T3*, T4* ),
  op_set set,                                                         
  op_dat<T0> *arg0 ,int idx0 ,op_ptr *ptr0 ,op_access acc0 ,          
  op_dat<T1> *arg1 ,int idx1 ,op_ptr *ptr1 ,op_access acc1 ,
	op_dat<T2> *arg2 ,int idx2 ,op_ptr *ptr2 ,op_access acc2 ,
  op_dat<T3> *arg3 ,int idx3 ,op_ptr *ptr3 ,op_access acc3 ,
  op_dat<T4> *arg4 ,int idx4 ,op_ptr *ptr4 ,op_access acc4){
	return 0;
}                                                                                        
                                                                                         
//                                                                                       
// op_par_loop routine for 6 arguments                                                   
//                                                                                       
                                                                                         
template < class T0, class T1, class T2, class T3, class T4, class T5 >
float op_par_loop_6(void (*kernel)( T0*, T1*, T2*, T3*, T4*, T5* ),
  op_set set,                                                         
  op_dat<T0> *arg0 ,int idx0 ,op_ptr *ptr0 ,op_access acc0 ,          
  op_dat<T1> *arg1 ,int idx1 ,op_ptr *ptr1 ,op_access acc1 ,
	op_dat<T2> *arg2 ,int idx2 ,op_ptr *ptr2 ,op_access acc2 ,
  op_dat<T3> *arg3 ,int idx3 ,op_ptr *ptr3 ,op_access acc3 ,
  op_dat<T4> *arg4 ,int idx4 ,op_ptr *ptr4 ,op_access acc4 ,
  op_dat<T5> *arg5 ,int idx5 ,op_ptr *ptr5 ,op_access acc5){
	return 0;
}
                                                                                       
//                                                                                       
// op_par_loop routine for 9 arguments                                                   
//                                                                                       
                                                                                         
template < class T0, class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8 >
float op_par_loop_9(void (*kernel)( T0*, T1*, T2*, T3*, T4*, T5*, T6*, T7*, T8* ),
  op_set set,                                                         
  op_dat<T0> *arg0 ,int idx0 ,op_ptr *ptr0 ,op_access acc0 ,          
  op_dat<T1> *arg1 ,int idx1 ,op_ptr *ptr1 ,op_access acc1 ,
	op_dat<T2> *arg2 ,int idx2 ,op_ptr *ptr2 ,op_access acc2 ,
  op_dat<T3> *arg3 ,int idx3 ,op_ptr *ptr3 ,op_access acc3 ,
  op_dat<T4> *arg4 ,int idx4 ,op_ptr *ptr4 ,op_access acc4 ,
  op_dat<T5> *arg5 ,int idx5 ,op_ptr *ptr5 ,op_access acc5 ,
  op_dat<T6> *arg6 ,int idx6 ,op_ptr *ptr6 ,op_access acc6 ,
  op_dat<T7> *arg7 ,int idx7 ,op_ptr *ptr7 ,op_access acc7 , 
  op_dat<T8> *arg8 ,int idx8 ,op_ptr *ptr8 ,op_access acc8){
	return 0;
}                                                                         
