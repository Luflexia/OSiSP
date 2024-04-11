## Диспетчер процессов и потоков (Process and Thread Manager)
Аналог утилиты top, показывающий список процессов запущенных в данный момент с информацией о PID, пользователе, приоритете, потребляемом количестве оперативной памяти и ресурса процессора и пр. Использовать системные вызовы для работы с процессами и с информацией о системе, функции sysctl.

##Выглядеть оно должно так:

Bruh - (16:34:27), (0 days, 05:34), (3 users), (0.10, 0.12, 0.15 - за 1 минуту, 5 минут и 15 минут).
Tasks - total: 628, running: 2, sleeping: 626, stopped: 0, zombie: 0
%Cpu(s) - user: 1.1%, system: 0.4%, nice: 0.0%, idle: 98.5%, iowait: 0.0%, irq: 0.0%, softirq: 0.0%, steal: 0.0%


Processes:
PID   USER       PRIO   VM(KB)   RM(KB)   CPU(%)   COMMAND
123   user1      10     2048     1024     5.0      process1
124   user2      15     4096     2048     10.0     process2
...

Threads:
TID   PID   USER       PRIO   VM(KB)   RM(KB)   CPU(%)   COMMAND
1     123   user1      10     1024     512      3.0      thread1
2     123   user1      10     1024     512      2.0      thread2
3     124   user2      15     2048     1024     4.0      thread3
...