OBJ=./obj
EXEC=./exec.out

CC=g++ 
LDFLAGS=-ldl -lpthread -rdynamic
INCLUDE=$(addprefix -I,./include/ ./include/dlpack/include ./include/support)

OBJECTS=$(addprefix $(OBJ)/,main.o module.o registry.o c_runtime_api.o object.o logging.o ndarray.o cpu_device_api.o workspace_pool.o)
OBJECTS+=$(addprefix $(OBJ)/,file_utils.o container.o library_module.o dso_library.o thread_pool.o threading_backend.o const_loader_module.o)
OBJECTS+=$(addprefix $(OBJ)/,graph_executor.o) 


$(OBJ)/%.o:./src/%.cc
	$(CC) $(INCLUDE) -w -c -o $@ $<

$(OBJ)/graph_executor.o:./src/graph_executor/graph_executor.cc
	$(CC) $(INCLUDE) -w -c -o $@ $<

build: $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXEC) $(LDFLAGS)
	@echo Done!

run:
	$(EXEC)

clean: 
	rm -f $(OBJ)/*.o ./exec.out
