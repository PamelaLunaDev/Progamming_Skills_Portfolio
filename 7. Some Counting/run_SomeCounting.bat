@echo off
cls
echo Compiling SomeCounting...
g++ SomeCounting.cpp -o SomeCounting.exe
if %errorlevel% neq 0 (
	echo.
	echo Compilation failed!
	pause
	exit /b
)
echo Runing SomeCounting...
SomeCounting.exe
pause