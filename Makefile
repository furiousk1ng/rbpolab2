all: task1.exe task2.exe task3.exe task4.exe task5.exe task6.exe task7.exe task8.exe task9.exe task10.exe
task1.exe: task1.cpp
	cl /task1.exe task1.cpp
task2.exe: task2.cpp
	cl /task2.exe task2.cpp
task3.exe: task3.cpp
	cl /task3.exe task3.cpp
task4.exe: task4.cpp
	cl /task4.exe task4.cpp
task5.exe: task5.cpp
	cl /task5.exe task5.cpp
task6.exe: task6_main.cpp task6_func.cpp
	cl /task6.exe task6_main.cpp task6_func.cpp
task7.exe: task7_main.cpp task7_func.cpp
	cl /task7.exe task7_main.cpp task7_func.cpp
task8.exe: task8_main.cpp task8_func.cpp
	cl /task8.exe task8_main.cpp task8_func.cpp
task9.exe: task9_main.cpp task9_func.cpp
	cl /task9.exe task9_main.cpp task9_func.cpp
task10.exe: task9_func.obj task9_main.obj
	lib  /out:task10_lib.lib task9_func.obj
	link /out:task10.exe task9_main.obj task10_lib.lib
clean:
	del /s /q *.exe
	del /s /q *.obj
	del /s /q *.lib