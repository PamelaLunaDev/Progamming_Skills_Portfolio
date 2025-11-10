@echo off
cls
echo Compiling Biography...
g++ Biography.cpp -o Biography.exe
if %errorlevel% neq 0 (
	echo.
	echo Compilation failed!
	pause
	exit /b
)
echo Runing Biography...
Biography.exe
pause