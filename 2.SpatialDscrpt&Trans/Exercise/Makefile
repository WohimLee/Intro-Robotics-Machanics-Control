
c_srcs := $(shell find src -name "*.c")
c_objs := $(patsubst src/%.c,objs/%.o,$(c_srcs))


include_dirs := ./include


I_options := $(include_dirs:%=-I%)

compile_options := -g -O3 $(I_options)
linking_options := 

objs/%.o : src/%.c
	@echo [INFO]: Compile $^ to $@
	@mkdir -p $(dir $@)
	@gcc -c $^ -o $@ $(compile_options)


workspace/exec : $(c_objs)
	@echo [INFO]: Link $^ to $@
	@mkdir -p $(dir $@)
	@gcc $^ -o $@ $(linking_options)

run : workspace/exec
	@./$<


clean : 
	@rm -rf objs workspace/exec

debug :
	@echo $(c_srcs)
	@echo $(c_objs)



.PHONY : debug run clean
