/load function f from shared object o define as n with p params
.io:()!()
lso:{@[`.io;y;:;2:[.Q.dd[(-1!`$getenv`QHOME);(`l32arm;x)];(y;z)]]}

/custom
f:+(`init`setpwm`pwmwrite`wait`mode`write`read;1 3 2 1 2 2 1)
-1"loading functions: .io.",", .io."/:$f[;0];
lso[`io]./:f;
-1"Calling .io.init[] and removing(can only call once)";
.io.init[]
![`.io;();0b;1#`init];
