rm ./files/*
python3 mobilenet.py
cd runtime
make clean 
make build 
make run 
