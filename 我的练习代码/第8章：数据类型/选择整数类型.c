//选择整数类型 

//为什么整数要有那么多种？
   //·为了准确表达内存，做底层程序的需要！ 
//· 没有特殊需要，就选int
  //·现在的CPU字长都是32位或64位，一次内存读写就是一个int，一次计算也是一个int，选择更短的类型不会更快，甚至可能更慢
  //*现代编译器一般会设计内存对齐，所以更短的类型在实际内存中有可能也占据一个int的大小（虽然sizeof告诉你更小）
//·unsigned与否只是输出的不同，内部计算是一样的

 
