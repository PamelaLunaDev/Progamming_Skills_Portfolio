@echo off
cls
echo Compiling PrimitiveQuiz...
g++ PrimitiveQuiz.cpp -o PrimitiveQuiz.exe
if %errorlevel% neq 0 (
	echo.
	echo Compilation failed!
	pause
	exit /b
)
echo Runing PrimitiveQuiz...
PrimitiveQuiz.exe
pause