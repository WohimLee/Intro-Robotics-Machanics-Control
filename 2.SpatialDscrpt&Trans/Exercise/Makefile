
MAIN   := Examples/main.c
MAIN.o := objs/main.o

c_srcs := $(shell find src -name "*.c")
c_objs := $(patsubst src/%.c,objs/%.o,$(c_srcs))


include_dirs := ./include
linking_libs := 
library_dirs := ./lib 
				

I_options := $(include_dirs:%=-I%)
l_options := $(linking_libs:%=-l%)
L_options := $(library_dirs:%=-L%)
r_options := $(library_dirs:%=-Wl,-rpath=%)

dynamic_options := -fPIC
compile_options := -g -O3 -w  $(I_options)
linking_options := $(l_options) $(L_options) $(r_options)

$(MAIN.o) : $(MAIN)
	@echo [INFO]: Compile $< to $@
	@mkdir -p $(dir $@)
	@g++ -c $< -o $@ $(compile_options) 

objs/%.o : src/%.c
	@echo [INFO]: Compile $^ to $@
	@mkdir -p $(dir $@)
	@g++ -c $^ -o $@ $(compile_options) $(dynamic_options)

lib/libexercise.so : $(c_objs)
	@echo [INFO]: Generate $@, including: $^
	@mkdir -p $(dir $@)
	@g++ -shared $^ -o $@ $(linking_options)


dynamic : lib/libexercise.so


workspace/exec : $(MAIN.o)
	@echo [INFO]: Link $< to $@
	@mkdir -p $(dir $@)
	@g++ $< -o $@ 

run : workspace/exec
	@./$<


clean :
	@rm -rf objs lib workspace/exec


debug :
	@echo $(linking_options)



.PHONY : run clean debug dynamic