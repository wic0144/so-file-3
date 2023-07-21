#include "out.h"



int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_00102020(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



void PyUnicode_FromFormat(void)

{
  PyUnicode_FromFormat();
  return;
}



void PyList_New(void)

{
  PyList_New();
  return;
}



void PyDict_SetItemString(void)

{
  PyDict_SetItemString();
  return;
}



void _PyThreadState_UncheckedGet(void)

{
  _PyThreadState_UncheckedGet();
  return;
}



void PyModuleDef_Init(void)

{
  PyModuleDef_Init();
  return;
}



void Py_EnterRecursiveCall(void)

{
  Py_EnterRecursiveCall();
  return;
}



void PyFrame_New(void)

{
  PyFrame_New();
  return;
}



void PyObject_GetAttrString(void)

{
  PyObject_GetAttrString();
  return;
}



void PyImport_AddModule(void)

{
  PyImport_AddModule();
  return;
}



void PyBytes_FromStringAndSize(void)

{
  PyBytes_FromStringAndSize();
  return;
}



void PyObject_SetAttrString(void)

{
  PyObject_SetAttrString();
  return;
}



void PyErr_WarnEx(void)

{
  PyErr_WarnEx();
  return;
}



void _Py_Dealloc(void)

{
  _Py_Dealloc();
  return;
}



void PyModule_NewObject(void)

{
  PyModule_NewObject();
  return;
}



void PyCode_New(void)

{
  PyCode_New();
  return;
}



void PyImport_GetModuleDict(void)

{
  PyImport_GetModuleDict();
  return;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void PyCMethod_New(void)

{
  PyCMethod_New();
  return;
}



void PyErr_SetString(void)

{
  PyErr_SetString();
  return;
}



void PyInterpreterState_GetID(void)

{
  PyInterpreterState_GetID();
  return;
}



void PyEval_EvalFrameEx(void)

{
  PyEval_EvalFrameEx();
  return;
}



void PyMem_Realloc(void)

{
  PyMem_Realloc();
  return;
}



void PyErr_ExceptionMatches(void)

{
  PyErr_ExceptionMatches();
  return;
}



void PyOS_snprintf(void)

{
  PyOS_snprintf();
  return;
}



void PyTraceBack_Here(void)

{
  PyTraceBack_Here();
  return;
}



void PyObject_Not(void)

{
  PyObject_Not();
  return;
}



void PyErr_Clear(void)

{
  PyErr_Clear();
  return;
}



void PyTuple_New(void)

{
  PyTuple_New();
  return;
}



void PyThreadState_Get(void)

{
  PyThreadState_Get();
  return;
}



void PyObject_SetAttr(void)

{
  PyObject_SetAttr();
  return;
}



void PyErr_Occurred(void)

{
  PyErr_Occurred();
  return;
}



void _PyDict_GetItem_KnownHash(void)

{
  _PyDict_GetItem_KnownHash();
  return;
}



void Py_LeaveRecursiveCall(void)

{
  Py_LeaveRecursiveCall();
  return;
}



void PyDict_GetItemString(void)

{
  PyDict_GetItemString();
  return;
}



void PyEval_EvalCodeEx(void)

{
  PyEval_EvalCodeEx();
  return;
}



void PyImport_ImportModuleLevelObject(void)

{
  PyImport_ImportModuleLevelObject();
  return;
}



void PyObject_Hash(void)

{
  PyObject_Hash();
  return;
}



void PyDict_New(void)

{
  PyDict_New();
  return;
}



void PyUnicode_AsUTF8(void)

{
  PyUnicode_AsUTF8();
  return;
}



void _PyObject_GetDictPtr(void)

{
  _PyObject_GetDictPtr();
  return;
}



void PyUnicode_InternFromString(void)

{
  PyUnicode_InternFromString();
  return;
}



void PyDict_SetItem(void)

{
  PyDict_SetItem();
  return;
}



void PyObject_Call(void)

{
  PyObject_Call();
  return;
}



void PyType_IsSubtype(void)

{
  PyType_IsSubtype();
  return;
}



void PyUnicode_Decode(void)

{
  PyUnicode_Decode();
  return;
}



void PyErr_Format(void)

{
  PyErr_Format();
  return;
}



void PyUnicode_FromStringAndSize(void)

{
  PyUnicode_FromStringAndSize();
  return;
}



void PyModule_GetDict(void)

{
  PyModule_GetDict();
  return;
}



void PyObject_GetAttr(void)

{
  PyObject_GetAttr();
  return;
}



void PyMem_Malloc(void)

{
  PyMem_Malloc();
  return;
}



void PyTuple_Pack(void)

{
  PyTuple_Pack();
  return;
}



void Py_GetVersion(void)

{
  Py_GetVersion();
  return;
}



void PyCode_NewEmpty(void)

{
  PyCode_NewEmpty();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

wchar_t processEntry
__Pyx_copy_spec_to_module
          (PyObject *spec,PyObject *moddict,char *from_name,char *to_name,wchar_t allow_none)

{
  wchar_t wVar1;
  int iVar2;
  long *plVar3;
  PyObject *value;
  
  plVar3 = (long *)PyObject_GetAttrString(spec,from_name);
  if (plVar3 == (long *)0x0) {
    wVar1 = L'\xffffffff';
    iVar2 = PyErr_ExceptionMatches(_PyExc_AttributeError);
    if (iVar2 != 0) {
      PyErr_Clear();
      wVar1 = L'\0';
    }
  }
  else {
    if ((plVar3 != (long *)&_Py_NoneStruct) || (wVar1 = L'\0', (allow_none & 1U) != 0)) {
      wVar1 = PyDict_SetItemString(moddict,to_name,plVar3);
    }
    *plVar3 = *plVar3 + -1;
    if (*plVar3 == 0) {
      _Py_Dealloc(plVar3);
    }
  }
  return wVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention

PyObject * __pyx_pymod_create(PyObject *spec,PyModuleDef *def)

{
  wchar_t wVar1;
  long lVar2;
  int64_t current_id;
  long *plVar3;
  PyObject *modname;
  PyObject *pPVar4;
  PyObject *moddict_00;
  PyObject *moddict;
  undefined8 *puVar5;
  PyObject *pPVar6;
  undefined8 auStack_50 [5];
  undefined auStack_28 [8];
  
  puVar5 = (undefined8 *)auStack_28;
  auStack_50[4] = 0x102772;
  lVar2 = PyThreadState_Get();
  auStack_50[4] = 0x10277b;
  lVar2 = PyInterpreterState_GetID(*(undefined8 *)(lVar2 + 0x10));
  pPVar6 = __pyx_m;
  if (main_interpreter_id_15707 == -1) {
    main_interpreter_id_15707 = lVar2;
    if (lVar2 == -1) {
      return (PyObject *)0x0;
    }
  }
  else if (lVar2 != main_interpreter_id_15707) {
    auStack_50[4] = 0x1027b1;
    PyErr_SetString(_PyExc_ImportError,
                    "Interpreter change detected - this module can only be loaded into one interpreter per process."
                   );
    return (PyObject *)0x0;
  }
  if (__pyx_m != (PyObject *)0x0) {
    __pyx_m->ob_refcnt = __pyx_m->ob_refcnt + 1;
    return pPVar6;
  }
  auStack_50[4] = 0x1027dd;
  plVar3 = (long *)PyObject_GetAttrString(spec,&DAT_0010519c);
  if (plVar3 != (long *)0x0) {
    auStack_50[4] = 0x1027ed;
    pPVar4 = (PyObject *)PyModule_NewObject(plVar3);
    *plVar3 = *plVar3 + -1;
    if (*plVar3 == 0) {
      auStack_50[4] = 0x1027fd;
      _Py_Dealloc(plVar3);
    }
    if (pPVar4 != (PyObject *)0x0) {
      auStack_50[4] = 0x10280a;
      moddict_00 = (PyObject *)PyModule_GetDict(pPVar4);
      if (moddict_00 != (PyObject *)0x0) {
        puVar5 = auStack_50 + 4;
        auStack_50[4] = 0x102835;
        wVar1 = __Pyx_copy_spec_to_module(spec,moddict_00,"loader","__loader__",L'\x01');
        if (L'\xffffffff' < wVar1) {
          puVar5 = auStack_50 + 3;
          auStack_50[3] = 0x102858;
          wVar1 = __Pyx_copy_spec_to_module(spec,moddict_00,"origin","__file__",L'\x01');
          if (L'\xffffffff' < wVar1) {
            puVar5 = auStack_50 + 2;
            auStack_50[2] = 0x10287b;
            wVar1 = __Pyx_copy_spec_to_module(spec,moddict_00,"parent","__package__",L'\x01');
            if (L'\xffffffff' < wVar1) {
              puVar5 = auStack_50 + 1;
              auStack_50[1] = 0x10289b;
              wVar1 = __Pyx_copy_spec_to_module
                                (spec,moddict_00,"submodule_search_locations","__path__",L'\0');
              if (L'\xffffffff' < wVar1) {
                return pPVar4;
              }
            }
          }
        }
      }
      pPVar4->ob_refcnt = pPVar4->ob_refcnt + -1;
      if (pPVar4->ob_refcnt == 0) {
        *(undefined8 *)((long)puVar5 + -8) = 0x1028b6;
        _Py_Dealloc(pPVar4);
        return pPVar6;
      }
    }
  }
  return (PyObject *)0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention

PyObject * __Pyx_ImportFrom(PyObject *module,PyObject *name)

{
  getattrofunc p_Var1;
  int iVar2;
  PyObject *value;
  
  p_Var1 = module->ob_type->tp_getattro;
  if (p_Var1 == (getattrofunc)0x0) {
    value = (PyObject *)PyObject_GetAttr();
  }
  else {
    value = (*p_Var1)(module,name);
  }
  if (value == (PyObject *)0x0) {
    iVar2 = PyErr_ExceptionMatches(_PyExc_AttributeError);
    if (iVar2 != 0) {
      PyErr_Format(_PyExc_ImportError,"cannot import name %S",name);
    }
  }
  return value;
}



PyObject * __Pyx_Import(PyObject *name,PyObject *from_list,wchar_t level)

{
  PyObject *pPVar1;
  long lVar2;
  long *plVar3;
  PyObject *pPVar4;
  undefined4 in_register_00000014;
  PyObject *list;
  
  if (from_list == (PyObject *)0x0) {
    pPVar1 = (PyObject *)PyList_New(0,0,CONCAT44(in_register_00000014,level));
    list = pPVar1;
    if (pPVar1 == (PyObject *)0x0) {
      return (PyObject *)0x0;
    }
  }
  else {
    pPVar1 = (PyObject *)0x0;
    list = from_list;
  }
  lVar2 = PyModule_GetDict(__pyx_m);
  if ((lVar2 == 0) || (plVar3 = (long *)PyDict_New(), plVar3 == (long *)0x0)) {
    if (pPVar1 == (PyObject *)0x0) {
      return (PyObject *)0x0;
    }
    pPVar4 = (PyObject *)0x0;
    plVar3 = (long *)0x0;
  }
  else {
    pPVar4 = (PyObject *)PyImport_ImportModuleLevelObject(name,lVar2,plVar3,list,0);
    if (pPVar1 == (PyObject *)0x0) goto LAB_001029af;
  }
  pPVar1->ob_refcnt = pPVar1->ob_refcnt + -1;
  if (pPVar1->ob_refcnt == 0) {
    _Py_Dealloc(pPVar1);
  }
  if (plVar3 == (long *)0x0) {
    return pPVar4;
  }
LAB_001029af:
  *plVar3 = *plVar3 + -1;
  if (*plVar3 == 0) {
    _Py_Dealloc(plVar3);
    return pPVar4;
  }
  return pPVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention

wchar_t __pyx_pymod_exec_func_POC(PyObject *__pyx_pyinit_module)

{
  long lVar1;
  PyObject **ppPVar2;
  PyTypeObject *pPVar3;
  Py_ssize_t *pPVar4;
  int iVar5;
  wchar_t wVar6;
  char *pcVar7;
  long lVar8;
  PyObject *pPVar9;
  PyObject *modules;
  long lVar10;
  PyObject *pPVar11;
  char *pcVar12;
  __Pyx_StringTabEntry *p_Var13;
  PyObject *_py_tmp;
  wchar_t c_line;
  long in_FS_OFFSET;
  char ctversion [4];
  char rtversion [4];
  char message [200];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  wVar6 = L'\0';
  if (__pyx_m != (PyObject *)0x0) {
    if (__pyx_m != __pyx_pyinit_module) {
      PyErr_SetString(_PyExc_RuntimeError,
                      "Module \'func_POC\' has already been imported. Re-initialisation is not supported."
                     );
      wVar6 = L'\xffffffff';
    }
    goto LAB_0010312e;
  }
  pcVar12 = ctversion;
  PyOS_snprintf(pcVar12,4,"%d.%d",3,9);
  pcVar7 = (char *)Py_GetVersion();
  PyOS_snprintf(rtversion,4,&DAT_0010523a);
  if ((ctversion[0] == rtversion[0]) && (ctversion[2] == rtversion[2])) {
LAB_00102ac1:
    __pyx_pyframe_localsplus_offset = _PyDict_SetItem - 8;
    __pyx_empty_tuple = (PyObject *)PyTuple_New(0);
    if (__pyx_empty_tuple == (PyObject *)0x0) {
      c_line = L'پ';
      wVar6 = L'\x02';
      goto LAB_00102cd6;
    }
    __pyx_empty_bytes = (PyObject *)PyBytes_FromStringAndSize("",0);
    if (__pyx_empty_bytes == (PyObject *)0x0) {
      c_line = L'ٿ';
      wVar6 = L'\x02';
      goto LAB_00102cd6;
    }
    lVar8 = PyUnicode_FromStringAndSize("",0);
    if (lVar8 == 0) {
      c_line = L'ڀ';
      wVar6 = L'\x02';
      goto LAB_00102cd6;
    }
    __pyx_pyinit_module->ob_refcnt = __pyx_pyinit_module->ob_refcnt + 1;
    __pyx_m = __pyx_pyinit_module;
    __pyx_d = (PyObject *)PyModule_GetDict(__pyx_pyinit_module);
    if (__pyx_d == (PyObject *)0x0) {
      c_line = L'ڤ';
      wVar6 = L'\x02';
      goto LAB_00102cd6;
    }
    __pyx_d->ob_refcnt = __pyx_d->ob_refcnt + 1;
    __pyx_b = (PyObject *)PyImport_AddModule("builtins");
    if (__pyx_b == (PyObject *)0x0) {
      c_line = L'ڦ';
      wVar6 = L'\x02';
      goto LAB_00102cd6;
    }
    __pyx_b->ob_refcnt = __pyx_b->ob_refcnt + 1;
    __pyx_cython_runtime = (PyObject *)PyImport_AddModule("cython_runtime");
    if (__pyx_cython_runtime == (PyObject *)0x0) {
      c_line = L'ڨ';
      wVar6 = L'\x02';
      goto LAB_00102cd6;
    }
    __pyx_cython_runtime->ob_refcnt = __pyx_cython_runtime->ob_refcnt + 1;
    c_line = L'ڪ';
    wVar6 = L'\x02';
    p_Var13 = __pyx_string_tab;
    iVar5 = PyObject_SetAttrString(__pyx_m,"__builtins__",__pyx_b);
    if (iVar5 < 0) goto LAB_00102cd6;
    for (; ppPVar2 = p_Var13->p, ppPVar2 != (PyObject **)0x0; p_Var13 = p_Var13 + 1) {
      if ((byte)(p_Var13->is_unicode | p_Var13->is_str) == 0) {
        pPVar9 = (PyObject *)PyBytes_FromStringAndSize(p_Var13->s,p_Var13->n + -1);
        *ppPVar2 = pPVar9;
      }
      else if (p_Var13->intern == '\0') {
        if (p_Var13->encoding == (char *)0x0) {
          pPVar9 = (PyObject *)PyUnicode_FromStringAndSize(p_Var13->s,p_Var13->n + -1);
          *ppPVar2 = pPVar9;
        }
        else {
          pcVar7 = (char *)0x0;
          pPVar9 = (PyObject *)PyUnicode_Decode();
          *ppPVar2 = pPVar9;
        }
      }
      else {
        pPVar9 = (PyObject *)PyUnicode_InternFromString();
        *ppPVar2 = pPVar9;
      }
      if (*p_Var13->p == (PyObject *)0x0) {
LAB_00102c2c:
        c_line = L'ڬ';
        wVar6 = L'\x02';
        goto LAB_00102cd6;
      }
      lVar8 = PyObject_Hash();
      if (lVar8 == -1) goto LAB_00102c2c;
    }
    if (__pyx_module_is_main_func_POC != L'\0') {
      iVar5 = PyObject_SetAttr(__pyx_m,__pyx_n_s_name,__pyx_n_s_main);
      if (iVar5 < 0) {
        c_line = L'ڱ';
        wVar6 = L'\x02';
        goto LAB_00102cd6;
      }
    }
    lVar8 = PyImport_GetModuleDict();
    if (lVar8 == 0) {
      c_line = L'ڵ';
      wVar6 = L'\x02';
      goto LAB_00102cd6;
    }
    lVar10 = PyDict_GetItemString(lVar8,"func_POC");
    if (lVar10 == 0) {
      iVar5 = PyDict_SetItemString(lVar8,"func_POC",__pyx_m);
      if (iVar5 < 0) {
        c_line = L'ڷ';
        wVar6 = L'\x02';
        goto LAB_00102cd6;
      }
    }
    lVar8 = PyTuple_Pack(2,__pyx_n_s_dataframe,__pyx_n_s_df);
    if (lVar8 == 0) {
LAB_00102cca:
      c_line = L'ھ';
      wVar6 = L'\x02';
      goto LAB_00102cd6;
    }
    lVar8 = PyCode_New(1,0,2,0,3,__pyx_empty_bytes,__pyx_empty_tuple,__pyx_empty_tuple,lVar8,
                       __pyx_empty_tuple,__pyx_empty_tuple,
                       __pyx_kp_s_dbfs_FileStore_shared_uploads_j,__pyx_n_s_fib,5,__pyx_empty_bytes,
                       pcVar7);
    if (lVar8 == 0) goto LAB_00102cca;
    pPVar11 = (PyObject *)PyList_New(1);
    pPVar9 = __pyx_n_s_functions;
    if (pPVar11 == (PyObject *)0x0) {
      c_line = L'ے';
      wVar6 = L'\x02';
      goto LAB_00102cd6;
    }
    pPVar3 = pPVar11[1].ob_type;
    __pyx_n_s_functions->ob_refcnt = __pyx_n_s_functions->ob_refcnt + 1;
    (pPVar3->ob_base).ob_base.ob_refcnt = (Py_ssize_t)pPVar9;
    pPVar9 = __Pyx_Import(__pyx_n_s_pyspark_sql,pPVar11,(wchar_t)pPVar3);
    if (pPVar9 == (PyObject *)0x0) {
      c_line = L'ۗ';
      wVar6 = L'\x02';
      goto LAB_00103007;
    }
    pPVar11->ob_refcnt = pPVar11->ob_refcnt + -1;
    if (pPVar11->ob_refcnt == 0) {
      _Py_Dealloc(pPVar11);
    }
    pPVar11 = __Pyx_ImportFrom(pPVar9,__pyx_n_s_functions);
    if (pPVar11 == (PyObject *)0x0) {
      c_line = L'ۚ';
      wVar6 = L'\x02';
LAB_0010301e:
      pPVar9->ob_refcnt = pPVar9->ob_refcnt + -1;
      if (pPVar9->ob_refcnt == 0) {
        _Py_Dealloc(pPVar9);
      }
      goto LAB_00102cd6;
    }
    iVar5 = PyDict_SetItem(__pyx_d,__pyx_n_s_F,pPVar11);
    if (iVar5 < 0) {
      c_line = L'ۜ';
      wVar6 = L'\x02';
      goto LAB_00103007;
    }
    pPVar11->ob_refcnt = pPVar11->ob_refcnt + -1;
    if (pPVar11->ob_refcnt == 0) {
      _Py_Dealloc(pPVar11);
    }
    pPVar9->ob_refcnt = pPVar9->ob_refcnt + -1;
    if (pPVar9->ob_refcnt == 0) {
      _Py_Dealloc(pPVar9);
    }
    pPVar9 = (PyObject *)PyList_New(1);
    pPVar11 = __pyx_n_s_DataFrame;
    if (pPVar9 == (PyObject *)0x0) {
      c_line = L'ۧ';
      wVar6 = L'\x03';
      goto LAB_00102cd6;
    }
    pPVar3 = pPVar9[1].ob_type;
    __pyx_n_s_DataFrame->ob_refcnt = __pyx_n_s_DataFrame->ob_refcnt + 1;
    (pPVar3->ob_base).ob_base.ob_refcnt = (Py_ssize_t)pPVar11;
    pPVar11 = __Pyx_Import(__pyx_n_s_pyspark_sql,pPVar9,(wchar_t)pPVar3);
    if (pPVar11 == (PyObject *)0x0) {
      c_line = L'۬';
      wVar6 = L'\x03';
      goto LAB_0010301e;
    }
    pPVar9->ob_refcnt = pPVar9->ob_refcnt + -1;
    if (pPVar9->ob_refcnt == 0) {
      _Py_Dealloc(pPVar9);
    }
    pPVar9 = __Pyx_ImportFrom(pPVar11,__pyx_n_s_DataFrame);
    if (pPVar9 == (PyObject *)0x0) {
      c_line = L'ۯ';
      wVar6 = L'\x03';
LAB_00103007:
      pPVar11->ob_refcnt = pPVar11->ob_refcnt + -1;
      if (pPVar11->ob_refcnt == 0) {
        _Py_Dealloc(pPVar11);
      }
      if (pPVar9 == (PyObject *)0x0) goto LAB_00102cd6;
      goto LAB_0010301e;
    }
    iVar5 = PyDict_SetItem(__pyx_d,__pyx_n_s_DataFrame,pPVar9);
    if (iVar5 < 0) {
      c_line = L'۱';
      wVar6 = L'\x03';
      goto LAB_00103007;
    }
    pPVar9->ob_refcnt = pPVar9->ob_refcnt + -1;
    if (pPVar9->ob_refcnt == 0) {
      _Py_Dealloc(pPVar9);
    }
    pPVar11->ob_refcnt = pPVar11->ob_refcnt + -1;
    if (pPVar11->ob_refcnt == 0) {
      _Py_Dealloc(pPVar11);
    }
    pPVar11 = (PyObject *)PyCMethod_New(&__pyx_mdef_8func_POC_1fib,0,__pyx_n_s_func_POC,0);
    if (pPVar11 == (PyObject *)0x0) {
      c_line = L'ۼ';
      wVar6 = L'\x05';
      goto LAB_00102cd6;
    }
    iVar5 = PyDict_SetItem(__pyx_d,__pyx_n_s_fib,pPVar11);
    if (iVar5 < 0) {
      pPVar9 = (PyObject *)0x0;
      c_line = L'۾';
      wVar6 = L'\x05';
      goto LAB_00103007;
    }
    pPVar11->ob_refcnt = pPVar11->ob_refcnt + -1;
    if (pPVar11->ob_refcnt == 0) {
      _Py_Dealloc(pPVar11);
    }
    pPVar11 = (PyObject *)PyDict_New();
    if (pPVar11 == (PyObject *)0x0) {
      c_line = L'܇';
      wVar6 = L'\x02';
      goto LAB_00102cd6;
    }
    iVar5 = PyDict_SetItem(__pyx_d,__pyx_n_s_test,pPVar11);
    if (iVar5 < 0) {
      pPVar9 = (PyObject *)0x0;
      c_line = L'܉';
      wVar6 = L'\x02';
      goto LAB_00103007;
    }
    pPVar11->ob_refcnt = pPVar11->ob_refcnt + -1;
    if (pPVar11->ob_refcnt == 0) {
      _Py_Dealloc(pPVar11);
    }
  }
  else {
    PyOS_snprintf(message,200,
                  "compiletime version %s of module \'%.100s\' does not match runtime version %s",
                  pcVar12,"func_POC",rtversion);
    iVar5 = PyErr_WarnEx(0,message,1);
    pcVar7 = pcVar12;
    if (-1 < iVar5) goto LAB_00102ac1;
    c_line = L'ٺ';
    wVar6 = L'\x02';
LAB_00102cd6:
    if (__pyx_m == (PyObject *)0x0) {
      lVar8 = PyErr_Occurred();
      if (lVar8 == 0) {
        PyErr_SetString(_PyExc_ImportError,"init func_POC");
      }
    }
    else {
      if (__pyx_d != (PyObject *)0x0) {
        __Pyx_AddTraceback("init func_POC",c_line,wVar6,"func_POC.pyx");
      }
      if (__pyx_m != (PyObject *)0x0) {
        __pyx_m->ob_refcnt = __pyx_m->ob_refcnt + -1;
        pPVar4 = &__pyx_m->ob_refcnt;
        __pyx_m = (PyObject *)0x0;
        if (*pPVar4 == 0) {
          _Py_Dealloc();
        }
      }
    }
  }
  wVar6 = -(uint)(__pyx_m == (PyObject *)0x0);
LAB_0010312e:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return wVar6;
}



// WARNING: Unknown calling convention

PyObject * PyInit_func_POC(void)

{
  PyObject *pPVar1;
  
  pPVar1 = (PyObject *)PyModuleDef_Init(&__pyx_moduledef);
  return pPVar1;
}



// WARNING: Removing unreachable block (ram,0x00103183)
// WARNING: Removing unreachable block (ram,0x0010318f)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x001031c4)
// WARNING: Removing unreachable block (ram,0x001031d0)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_8061 != '\0') {
    return;
  }
  __cxa_finalize(__dso_handle);
  deregister_tm_clones();
  completed_8061 = 1;
  return;
}



void frame_dummy(void)

{
  register_tm_clones();
  return;
}



// WARNING: Unknown calling convention

wchar_t __pyx_bisect_code_objects
                  (__Pyx_CodeObjectCacheEntry *entries,wchar_t count,wchar_t code_line)

{
  wchar_t wVar1;
  wchar_t wVar2;
  wchar_t wVar3;
  wchar_t wVar4;
  
  wVar4 = count + L'\xffffffff';
  if (L'\xffffffff' < wVar4) {
    if (entries[wVar4].code_line < code_line) {
      return count;
    }
    if (L'\0' < wVar4) {
      wVar3 = L'\0';
      do {
        while( true ) {
          wVar1 = (wVar4 - wVar3) / 2 + wVar3;
          wVar2 = entries[wVar1].code_line;
          if (wVar2 <= code_line) break;
          wVar4 = wVar1;
          if (wVar1 <= wVar3) goto LAB_00103289;
        }
        if (code_line <= wVar2) {
          return wVar1;
        }
        wVar3 = wVar1 + L'\x01';
      } while (wVar3 < wVar4);
      goto LAB_00103289;
    }
  }
  wVar2 = entries->code_line;
  wVar1 = L'\0';
LAB_00103289:
  return wVar1 + (uint)(wVar2 < code_line);
}



// WARNING: Unknown calling convention

PyObject *
__Pyx_PyFunction_FastCallNoKw(PyCodeObject *co,PyObject **args,Py_ssize_t na,PyObject *globals)

{
  size_t sVar1;
  int iVar2;
  long lVar3;
  PyThreadState *tstate;
  PyFrameObject *f;
  long lVar4;
  PyObject *pPVar5;
  PyObject *result;
  
  lVar3 = _PyThreadState_UncheckedGet();
  tstate = (PyThreadState *)PyFrame_New(lVar3,co,globals,0);
  sVar1 = __pyx_pyframe_localsplus_offset;
  if (tstate == (PyThreadState *)0x0) {
    pPVar5 = (PyObject *)0x0;
  }
  else {
    lVar4 = 0;
    if (0 < na) {
      do {
        pPVar5 = args[lVar4];
        pPVar5->ob_refcnt = pPVar5->ob_refcnt + 1;
        *(PyObject **)((long)&tstate->prev + lVar4 * 8 + sVar1) = pPVar5;
        lVar4 = lVar4 + 1;
      } while (na != lVar4);
    }
    pPVar5 = (PyObject *)PyEval_EvalFrameEx(tstate,0);
    iVar2 = *(int *)(lVar3 + 0x20);
    *(int *)(lVar3 + 0x20) = iVar2 + 1;
    tstate->prev = (_ts *)((long)&tstate->prev[-1].id + 7);
    if (tstate->prev == (_ts *)0x0) {
      _Py_Dealloc(tstate);
      iVar2 = *(int *)(lVar3 + 0x20) + -1;
    }
    *(int *)(lVar3 + 0x20) = iVar2;
  }
  return pPVar5;
}



PyObject *
__Pyx_PyFunction_FastCallDict(PyObject *func,PyObject **args,Py_ssize_t nargs,PyObject *kwargs)

{
  PyCodeObject *co_00;
  PyTypeObject *globals_00;
  long lVar1;
  ulong uVar2;
  PyObject *pPVar3;
  PyObject *result;
  PyObject *kwdefs;
  PyTypeObject *pPVar4;
  PyObject **d;
  PyObject *closure;
  Py_ssize_t PVar5;
  PyObject *argdefs;
  PyCodeObject *co;
  PyObject *globals;
  
  co_00 = (PyCodeObject *)func[1].ob_refcnt;
  globals_00 = func[1].ob_type;
  lVar1 = func[2].ob_refcnt;
  uVar2 = Py_EnterRecursiveCall(" while calling a Python object");
  if ((int)uVar2 != 0) {
    return (PyObject *)0x0;
  }
  if (((co_00->co_kwonlyargcount == L'\0') && (co_00->co_flags == L'C')) && (lVar1 == 0)) {
    if (co_00->co_argcount == nargs) {
      pPVar3 = __Pyx_PyFunction_FastCallNoKw
                         (co_00,args,(long)co_00->co_argcount,(PyObject *)globals_00);
      goto done;
    }
    PVar5 = func[3].ob_refcnt;
    pPVar4 = func[2].ob_type;
    d = (PyObject **)0x0;
  }
  else {
    PVar5 = func[3].ob_refcnt;
    pPVar4 = func[2].ob_type;
    d = (PyObject **)0x0;
    if (lVar1 != 0) {
      uVar2 = (ulong)*(uint *)(lVar1 + 0x10);
      d = (PyObject **)(lVar1 + 0x18);
    }
  }
  pPVar3 = (PyObject *)
           PyEval_EvalCodeEx(co_00,globals_00,0,args,nargs & 0xffffffff,0,0,d,uVar2,pPVar4,PVar5);
done:
  Py_LeaveRecursiveCall();
  return pPVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention

PyObject * __Pyx_GetBuiltinName(PyObject *name)

{
  getattrofunc p_Var1;
  PyObject *pPVar2;
  PyObject *result;
  
  p_Var1 = __pyx_b->ob_type->tp_getattro;
  if (p_Var1 == (getattrofunc)0x0) {
    pPVar2 = (PyObject *)PyObject_GetAttr();
  }
  else {
    pPVar2 = (*p_Var1)(__pyx_b,name);
  }
  if (pPVar2 != (PyObject *)0x0) {
    return pPVar2;
  }
  PyErr_Format(_PyExc_NameError,"name \'%U\' is not defined",name);
  return (PyObject *)0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention

PyObject * __Pyx__PyObject_CallOneArg(PyObject *func,PyObject *arg)

{
  ternaryfunc p_Var1;
  int iVar2;
  PyObject *pPVar3;
  PyObject *args;
  PyObject *result_1;
  long lVar4;
  ternaryfunc call;
  PyObject *result;
  
  pPVar3 = (PyObject *)PyTuple_New(1);
  if (pPVar3 == (PyObject *)0x0) {
    return (PyObject *)0x0;
  }
  arg->ob_refcnt = arg->ob_refcnt + 1;
  pPVar3[1].ob_type = (PyTypeObject *)arg;
  p_Var1 = func->ob_type->tp_call;
  if (p_Var1 == (ternaryfunc)0x0) {
    result = (PyObject *)PyObject_Call(func,pPVar3,0);
    goto LAB_0010350c;
  }
  iVar2 = Py_EnterRecursiveCall(" while calling a Python object");
  if (iVar2 == 0) {
    result = (*p_Var1)(func,pPVar3,(PyObject *)0x0);
    Py_LeaveRecursiveCall();
    if (result != (PyObject *)0x0) goto LAB_0010350c;
    lVar4 = PyErr_Occurred();
    if (lVar4 == 0) {
      PyErr_SetString(_PyExc_SystemError,"NULL result without error in PyObject_Call");
      result = (PyObject *)0x0;
      goto LAB_0010350c;
    }
  }
  result = (PyObject *)0x0;
LAB_0010350c:
  pPVar3->ob_refcnt = pPVar3->ob_refcnt + -1;
  if (pPVar3->ob_refcnt != 0) {
    return result;
  }
  _Py_Dealloc(pPVar3);
  return result;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention

PyObject * __Pyx_PyObject_Call2Args(PyObject *function,PyObject *arg1,PyObject *arg2)

{
  uint uVar1;
  long lVar2;
  ternaryfunc p_Var3;
  code *pcVar4;
  wchar_t flags;
  int iVar5;
  PyObject *pPVar6;
  PyObject *args;
  PyObject *pPVar7;
  PyObject *result;
  long lVar8;
  PyObject *in_RCX;
  ternaryfunc call;
  PyCFunctionObject *func;
  PyObject *self;
  PyCFunction meth;
  long in_FS_OFFSET;
  PyObject *args_1 [2];
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (function->ob_type == (PyTypeObject *)&PyFunction_Type) {
    args_1[0] = arg1;
    args_1[1] = arg2;
    pPVar7 = __Pyx_PyFunction_FastCallDict(function,args_1,2,in_RCX);
    goto LAB_0010366a;
  }
  if ((function->ob_type == (PyTypeObject *)&PyCFunction_Type) ||
     (iVar5 = PyType_IsSubtype(), iVar5 != 0)) {
    uVar1 = *(uint *)(function[1].ob_refcnt + 0x10);
    if ((uVar1 & 0xffffff8d) == 0x80) {
      pcVar4 = *(code **)(function[1].ob_refcnt + 8);
      self = (PyObject *)0x0;
      if ((uVar1 & 0x20) == 0) {
        self = (PyObject *)function[1].ob_type;
      }
      if ((uVar1 & 2) == 0) {
        args_1[0] = arg1;
        args_1[1] = arg2;
        pPVar7 = (PyObject *)(*pcVar4)(self,args_1,2);
      }
      else {
        args_1[0] = arg1;
        args_1[1] = arg2;
        pPVar7 = (PyObject *)(*pcVar4)(self,args_1,2,0);
      }
      goto LAB_0010366a;
    }
  }
  pPVar6 = (PyObject *)PyTuple_New(2);
  if (pPVar6 == (PyObject *)0x0) {
    pPVar7 = (PyObject *)0x0;
    goto LAB_0010366a;
  }
  arg1->ob_refcnt = arg1->ob_refcnt + 1;
  pPVar6[1].ob_type = (PyTypeObject *)arg1;
  arg2->ob_refcnt = arg2->ob_refcnt + 1;
  pPVar6[2].ob_refcnt = (Py_ssize_t)arg2;
  function->ob_refcnt = function->ob_refcnt + 1;
  p_Var3 = function->ob_type->tp_call;
  if (p_Var3 == (ternaryfunc)0x0) {
    pPVar7 = (PyObject *)PyObject_Call(function,pPVar6,0);
  }
  else {
    iVar5 = Py_EnterRecursiveCall(" while calling a Python object");
    if (iVar5 == 0) {
      pPVar7 = (*p_Var3)(function,pPVar6,(PyObject *)0x0);
      Py_LeaveRecursiveCall();
      if (pPVar7 == (PyObject *)0x0) {
        lVar8 = PyErr_Occurred();
        if (lVar8 != 0) goto LAB_001036c9;
        PyErr_SetString(_PyExc_SystemError,"NULL result without error in PyObject_Call");
        pPVar7 = (PyObject *)0x0;
      }
    }
    else {
LAB_001036c9:
      pPVar7 = (PyObject *)0x0;
    }
  }
  pPVar6->ob_refcnt = pPVar6->ob_refcnt + -1;
  if (pPVar6->ob_refcnt == 0) {
    _Py_Dealloc(pPVar6);
    function->ob_refcnt = function->ob_refcnt + -1;
    lVar8 = function->ob_refcnt;
  }
  else {
    function->ob_refcnt = function->ob_refcnt + -1;
    lVar8 = function->ob_refcnt;
  }
  if (lVar8 == 0) {
    _Py_Dealloc(function);
  }
LAB_0010366a:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar7;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Removing unreachable block (ram,0x00103c03)
// WARNING: Unknown calling convention

void __Pyx_AddTraceback(char *funcname,wchar_t c_line,wchar_t py_line,char *filename)

{
  __Pyx_CodeObjectCacheEntry *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  getattrofunc p_Var8;
  undefined4 uVar9;
  wchar_t wVar10;
  undefined4 uVar11;
  PyCodeObject **ppPVar12;
  int iVar13;
  wchar_t wVar14;
  wchar_t pos;
  long lVar15;
  PyThreadState *tstate;
  PyObject *ptype;
  PyObject *ptraceback;
  PyObject **cython_runtime_dict;
  PyCodeObject *pPVar16;
  long lVar17;
  PyCodeObject *pPVar18;
  __Pyx_CodeObjectCacheEntry *p_Var19;
  PyObject *pPVar20;
  __Pyx_CodeObjectCacheEntry *p_Var21;
  wchar_t i;
  wchar_t wVar22;
  ulong uVar23;
  wchar_t pos_1;
  __Pyx_CodeObjectCacheEntry *p_Var24;
  PyObject *use_cline_obj;
  PyObject *tmp_type;
  __Pyx_CodeObjectCacheEntry *entries;
  PyCodeObject *tmp;
  wchar_t wVar25;
  PyObject *use_cline;
  PyObject *tmp_tb;
  undefined *puVar26;
  PyObject *tmp_value;
  PyCodeObject *code_object;
  uint uVar27;
  wchar_t new_max;
  wchar_t code_line;
  PyObject *pvalue;
  
  lVar15 = _PyThreadState_UncheckedGet();
  if (__pyx_cython_runtime == (PyObject *)0x0) {
LAB_0010395f:
    code_line = -c_line;
    if (__pyx_code_cache.entries != (__Pyx_CodeObjectCacheEntry *)0x0) {
      p_Var19 = __pyx_code_cache.entries;
      wVar25 = __pyx_code_cache.count;
      wVar14 = __pyx_bisect_code_objects(__pyx_code_cache.entries,__pyx_code_cache.count,code_line);
      if (wVar14 < wVar25) goto LAB_001038e1;
    }
LAB_00103985:
    pPVar16 = (PyCodeObject *)
              PyUnicode_FromFormat
                        ("%s (%s:%d)",funcname,
                         "/dbfs/FileStore/shared_uploads/jakkaphe@ais.co.th/POC/func_POC.c",c_line);
    if (pPVar16 == (PyCodeObject *)0x0) {
      return;
    }
    lVar17 = PyUnicode_AsUTF8(pPVar16);
    if (lVar17 == 0) {
      (pPVar16->ob_base).ob_refcnt = (pPVar16->ob_base).ob_refcnt + -1;
      if ((pPVar16->ob_base).ob_refcnt != 0) {
        return;
      }
      goto LAB_00103a9e;
    }
    pPVar18 = (PyCodeObject *)PyCode_NewEmpty(filename,lVar17,py_line);
    (pPVar16->ob_base).ob_refcnt = (pPVar16->ob_base).ob_refcnt + -1;
    if ((pPVar16->ob_base).ob_refcnt == 0) {
      _Py_Dealloc(pPVar16);
    }
LAB_001039d4:
    if (pPVar18 == (PyCodeObject *)0x0) {
      return;
    }
    if (code_line != L'\0') {
      if (__pyx_code_cache.entries == (__Pyx_CodeObjectCacheEntry *)0x0) {
        p_Var19 = (__Pyx_CodeObjectCacheEntry *)PyMem_Malloc(0x400);
        if (p_Var19 != (__Pyx_CodeObjectCacheEntry *)0x0) {
          __pyx_code_cache.count = L'\x01';
          __pyx_code_cache.max_count = L'@';
          __pyx_code_cache.entries = p_Var19;
          p_Var19->code_line = code_line;
          p_Var19->code_object = pPVar18;
          (pPVar18->ob_base).ob_refcnt = (pPVar18->ob_base).ob_refcnt + 1;
        }
      }
      else {
        uVar23 = __pyx_code_cache._0_8_ & 0xffffffff;
        p_Var19 = __pyx_code_cache.entries;
        wVar14 = __pyx_bisect_code_objects
                           (__pyx_code_cache.entries,__pyx_code_cache.count,code_line);
        wVar25 = (wchar_t)uVar23;
        if (wVar14 < wVar25) {
          p_Var24 = p_Var19 + wVar14;
          if (code_line == p_Var24->code_line) {
            pPVar16 = p_Var24->code_object;
            p_Var24->code_object = pPVar18;
            (pPVar16->ob_base).ob_refcnt = (pPVar16->ob_base).ob_refcnt + -1;
            if ((pPVar16->ob_base).ob_refcnt == 0) {
              _Py_Dealloc();
            }
            goto LAB_001038fc;
          }
          if (__pyx_code_cache.max_count == wVar25) goto LAB_00103af5;
LAB_00103a35:
          wVar25 = (wchar_t)uVar23;
          uVar23 = uVar23 & 0xffffffff;
          p_Var21 = p_Var19 + (wVar25 + L'\xffffffff');
          do {
            ppPVar12 = &p_Var21->code_object;
            uVar9 = *(undefined4 *)((long)&p_Var21->code_object + 4);
            wVar10 = p_Var21->code_line;
            uVar11 = *(undefined4 *)&p_Var21->field_0xc;
            iVar13 = (int)uVar23;
            wVar22 = iVar13 + L'\xffffffff';
            uVar23 = (ulong)(uint)wVar22;
            p_Var21 = p_Var21 + -1;
            p_Var1 = p_Var19 + iVar13;
            *(undefined4 *)&p_Var1->code_object = *(undefined4 *)ppPVar12;
            *(undefined4 *)((long)&p_Var1->code_object + 4) = uVar9;
            p_Var1->code_line = wVar10;
            *(undefined4 *)&p_Var1->field_0xc = uVar11;
          } while (wVar14 < wVar22);
        }
        else if (__pyx_code_cache.max_count == wVar25) {
LAB_00103af5:
          uVar27 = wVar25 + L'@';
          p_Var19 = (__Pyx_CodeObjectCacheEntry *)PyMem_Realloc();
          if (p_Var19 == (__Pyx_CodeObjectCacheEntry *)0x0) goto LAB_001038fc;
          wVar25 = __pyx_code_cache.count;
          uVar23 = __pyx_code_cache._0_8_ & 0xffffffff;
          __pyx_code_cache._0_8_ = (ulong)uVar27 << 0x20;
          p_Var24 = p_Var19 + wVar14;
          __pyx_code_cache.entries = p_Var19;
          if (wVar14 < wVar25) goto LAB_00103a35;
        }
        else {
          p_Var24 = p_Var19 + wVar14;
        }
        p_Var24->code_line = code_line;
        p_Var24->code_object = pPVar18;
        __pyx_code_cache.count = wVar25 + L'\x01';
        (pPVar18->ob_base).ob_refcnt = (pPVar18->ob_base).ob_refcnt + 1;
      }
    }
  }
  else {
    uVar2 = *(undefined8 *)(lVar15 + 0x58);
    uVar3 = *(undefined8 *)(lVar15 + 0x60);
    *(undefined8 *)(lVar15 + 0x58) = 0;
    *(undefined8 *)(lVar15 + 0x60) = 0;
    uVar4 = *(undefined8 *)(lVar15 + 0x68);
    *(undefined8 *)(lVar15 + 0x68) = 0;
    ptraceback = (PyObject *)_PyObject_GetDictPtr();
    if (ptraceback == (PyObject *)0x0) {
      p_Var8 = __pyx_cython_runtime->ob_type->tp_getattro;
      if (p_Var8 == (getattrofunc)0x0) {
        pPVar20 = (PyObject *)PyObject_GetAttr();
      }
      else {
        pPVar20 = (*p_Var8)(__pyx_cython_runtime,__pyx_n_s_cline_in_traceback);
      }
      if (pPVar20 == (PyObject *)0x0) {
        PyErr_Clear();
        goto LAB_00103840;
      }
      iVar13 = PyObject_Not();
      if (iVar13 != 0) {
        lVar17 = pPVar20->ob_refcnt + -1;
        pPVar20->ob_refcnt = lVar17;
        if (lVar17 == 0) {
          puVar26 = &_Py_FalseStruct;
          goto LAB_00103cc7;
        }
        goto LAB_00103830;
      }
      lVar17 = pPVar20->ob_refcnt + -1;
      pPVar20->ob_refcnt = lVar17;
      if (lVar17 == 0) {
        puVar26 = &_Py_TrueStruct;
LAB_00103cc7:
        _Py_Dealloc();
        goto LAB_00103816;
      }
    }
    else {
      if (*(long *)(ptraceback->ob_refcnt + 0x18) != __pyx_dict_version_15888) {
        __pyx_dict_cached_value_15889 =
             (undefined *)
             _PyDict_GetItem_KnownHash
                       (ptraceback->ob_refcnt,__pyx_n_s_cline_in_traceback,
                        __pyx_n_s_cline_in_traceback[1].ob_type);
        __pyx_dict_version_15888 = *(long *)(ptraceback->ob_refcnt + 0x18);
      }
      puVar26 = __pyx_dict_cached_value_15889;
      if (__pyx_dict_cached_value_15889 == (undefined *)0x0) {
LAB_00103840:
        c_line = L'\0';
        PyObject_SetAttr(__pyx_cython_runtime,__pyx_n_s_cline_in_traceback,&_Py_FalseStruct);
      }
      else {
LAB_00103816:
        if ((puVar26 == &_Py_FalseStruct) ||
           ((puVar26 != &_Py_TrueStruct && (iVar13 = PyObject_Not(puVar26), iVar13 != 0)))) {
LAB_00103830:
          c_line = L'\0';
        }
      }
    }
    plVar5 = *(long **)(lVar15 + 0x58);
    plVar6 = *(long **)(lVar15 + 0x60);
    plVar7 = *(long **)(lVar15 + 0x68);
    *(undefined8 *)(lVar15 + 0x60) = uVar3;
    *(undefined8 *)(lVar15 + 0x58) = uVar2;
    *(undefined8 *)(lVar15 + 0x68) = uVar4;
    if ((plVar5 != (long *)0x0) && (*plVar5 = *plVar5 + -1, *plVar5 == 0)) {
      _Py_Dealloc();
    }
    if ((plVar6 != (long *)0x0) && (*plVar6 = *plVar6 + -1, *plVar6 == 0)) {
      _Py_Dealloc(plVar6);
    }
    if ((plVar7 != (long *)0x0) && (*plVar7 = *plVar7 + -1, *plVar7 == 0)) {
      _Py_Dealloc(plVar7);
    }
    if (c_line != L'\0') goto LAB_0010395f;
    code_line = py_line;
    if (__pyx_code_cache.entries == (__Pyx_CodeObjectCacheEntry *)0x0) {
LAB_00103ac1:
      pPVar18 = (PyCodeObject *)PyCode_NewEmpty(filename,funcname,py_line);
      goto LAB_001039d4;
    }
    p_Var19 = __pyx_code_cache.entries;
    wVar25 = __pyx_code_cache.count;
    wVar14 = __pyx_bisect_code_objects(__pyx_code_cache.entries,__pyx_code_cache.count,py_line);
    if (wVar25 <= wVar14) goto LAB_00103ac1;
LAB_001038e1:
    if (code_line != p_Var19[wVar14].code_line) {
      if (c_line != L'\0') goto LAB_00103985;
      goto LAB_00103ac1;
    }
    pPVar18 = p_Var19[wVar14].code_object;
    (pPVar18->ob_base).ob_refcnt = (pPVar18->ob_base).ob_refcnt + 1;
  }
LAB_001038fc:
  pPVar16 = (PyCodeObject *)PyFrame_New(lVar15,pPVar18,__pyx_d,0);
  if (pPVar16 == (PyCodeObject *)0x0) {
    (pPVar18->ob_base).ob_refcnt = (pPVar18->ob_base).ob_refcnt + -1;
    lVar15 = (pPVar18->ob_base).ob_refcnt;
    pPVar16 = pPVar18;
  }
  else {
    *(wchar_t *)((long)&pPVar16->co_filename + 4) = py_line;
    PyTraceBack_Here(pPVar16);
    (pPVar18->ob_base).ob_refcnt = (pPVar18->ob_base).ob_refcnt + -1;
    if ((pPVar18->ob_base).ob_refcnt == 0) {
      _Py_Dealloc(pPVar18);
    }
    (pPVar16->ob_base).ob_refcnt = (pPVar16->ob_base).ob_refcnt + -1;
    lVar15 = (pPVar16->ob_base).ob_refcnt;
  }
  if (lVar15 != 0) {
    __pyx_code_cache.count = (wchar_t)__pyx_code_cache._0_8_;
    __pyx_code_cache.max_count = SUB84(__pyx_code_cache._0_8_,4);
    return;
  }
LAB_00103a9e:
  _Py_Dealloc(pPVar16);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention

PyObject * __pyx_pw_8func_POC_1fib(PyObject *__pyx_self,PyObject *__pyx_v_dataframe)

{
  getattrofunc p_Var1;
  PyTypeObject *pPVar2;
  PyObject *pPVar3;
  code *pcVar4;
  uint uVar5;
  PyObject *func_00;
  PyObject *pPVar7;
  PyObject *pPVar8;
  PyTypeObject *tp;
  long lVar9;
  PyTypeObject *tp_1;
  int iVar6;
  PyObject *result_1;
  PyObject *result_2;
  PyObject *result_3;
  PyObject *result;
  PyCFunction meth_1;
  PyObject *in_RCX;
  wchar_t flags;
  PyCFunction cfunc_2;
  PyObject *tmp;
  PyObject *tmp_1;
  PyCFunctionObject *func_1;
  PyCFunctionObject *func_2;
  PyTypeObject *pPVar10;
  PyObject *self_1;
  PyObject *self_3;
  PyObject *self_5;
  PyCFunction meth;
  PyCFunction meth_2;
  PyObject *self_4;
  PyObject *tmp_2;
  PyCFunctionObject *func;
  PyObject *self_2;
  PyObject *function;
  PyCFunction cfunc;
  PyObject *function_1;
  PyCFunction cfunc_1;
  PyObject *function_2;
  wchar_t c_line;
  PyObject *self;
  long in_FS_OFFSET;
  PyObject *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  p_Var1 = __pyx_v_dataframe->ob_type->tp_getattro;
  if (p_Var1 == (getattrofunc)0x0) {
    func_00 = (PyObject *)PyObject_GetAttr();
  }
  else {
    func_00 = (*p_Var1)(__pyx_v_dataframe,__pyx_n_s_groupBy);
  }
  if (func_00 == (PyObject *)0x0) {
    c_line = L'Ӽ';
  }
  else {
    pPVar7 = (PyObject *)PyList_New(1);
    pPVar8 = __pyx_n_u_start_of_month;
    if (pPVar7 == (PyObject *)0x0) {
      c_line = L'Ӿ';
      pPVar8 = (PyObject *)0x0;
LAB_0010428e:
      func_00->ob_refcnt = func_00->ob_refcnt + -1;
      if (func_00->ob_refcnt == 0) {
LAB_00104295:
        pPVar7 = (PyObject *)0x0;
LAB_00104298:
        _Py_Dealloc(func_00);
        if (pPVar7 != (PyObject *)0x0) goto LAB_001042a5;
      }
    }
    else {
      pPVar10 = pPVar7[1].ob_type;
      pPVar2 = func_00->ob_type;
      __pyx_n_u_start_of_month->ob_refcnt = __pyx_n_u_start_of_month->ob_refcnt + 1;
      (pPVar10->ob_base).ob_base.ob_refcnt = (Py_ssize_t)pPVar8;
      if ((pPVar2 == (PyTypeObject *)&PyMethod_Type) &&
         (pPVar10 = func_00[1].ob_type, pPVar10 != (PyTypeObject *)0x0)) {
        pPVar3 = (PyObject *)func_00[1].ob_refcnt;
        (pPVar10->ob_base).ob_base.ob_refcnt = (pPVar10->ob_base).ob_base.ob_refcnt + 1;
        pPVar3->ob_refcnt = pPVar3->ob_refcnt + 1;
        func_00->ob_refcnt = func_00->ob_refcnt + -1;
        if (func_00->ob_refcnt == 0) {
          _Py_Dealloc(func_00);
        }
        pPVar8 = __Pyx_PyObject_Call2Args(pPVar3,(PyObject *)pPVar10,pPVar7);
        (pPVar10->ob_base).ob_base.ob_refcnt = (pPVar10->ob_base).ob_base.ob_refcnt + -1;
        if ((pPVar10->ob_base).ob_base.ob_refcnt == 0) {
          _Py_Dealloc(pPVar10);
        }
        pPVar7->ob_refcnt = pPVar7->ob_refcnt + -1;
        lVar9 = pPVar7->ob_refcnt;
        func_00 = pPVar3;
      }
      else {
        local_48 = pPVar7;
        if (pPVar2 == (PyTypeObject *)&PyFunction_Type) {
          pPVar8 = __Pyx_PyFunction_FastCallDict(func_00,&local_48,1,in_RCX);
        }
        else if (pPVar2 == (PyTypeObject *)&PyCFunction_Type) {
          lVar9 = func_00[1].ob_refcnt;
          uVar5 = *(uint *)(lVar9 + 0x10);
          if ((uVar5 & 8) == 0) goto LAB_00104535;
LAB_0010404c:
          pPVar8 = local_48;
          self_2 = (PyObject *)0x0;
          pcVar4 = *(code **)(lVar9 + 8);
          if ((uVar5 & 0x20) == 0) {
            self_2 = (PyObject *)func_00[1].ob_type;
          }
          iVar6 = Py_EnterRecursiveCall(" while calling a Python object");
          if (iVar6 == 0) {
            pPVar8 = (PyObject *)(*pcVar4)(self_2,pPVar8);
            Py_LeaveRecursiveCall();
            if (pPVar8 == (PyObject *)0x0) {
              lVar9 = PyErr_Occurred();
              if (lVar9 != 0) goto LAB_00104380;
              PyErr_SetString(_PyExc_SystemError,"NULL result without error in PyObject_Call");
              pPVar8 = (PyObject *)0x0;
            }
          }
          else {
LAB_00104380:
            pPVar8 = (PyObject *)0x0;
          }
        }
        else {
          iVar6 = PyType_IsSubtype(pPVar2,&PyCFunction_Type);
          if (iVar6 != 0) {
            lVar9 = func_00[1].ob_refcnt;
            uVar5 = *(uint *)(lVar9 + 0x10);
            if ((uVar5 & 8) != 0) goto LAB_0010404c;
            if (func_00->ob_type != (PyTypeObject *)&PyCFunction_Type) {
              iVar6 = PyType_IsSubtype(func_00->ob_type,&PyCFunction_Type);
              if (iVar6 == 0) goto LAB_00104549;
              lVar9 = func_00[1].ob_refcnt;
            }
LAB_00104535:
            uVar5 = *(uint *)(lVar9 + 0x10);
            in_RCX = (PyObject *)(ulong)(uVar5 & 0xffffff8d);
            if ((uVar5 & 0xffffff8d) == 0x80) {
              self_3 = (PyObject *)0x0;
              if ((uVar5 & 0x20) == 0) {
                self_3 = (PyObject *)func_00[1].ob_type;
              }
              flags = uVar5 & 2;
              if (flags == L'\0') {
                pPVar8 = (PyObject *)(**(code **)(lVar9 + 8))(self_3,&local_48,1);
              }
              else {
                in_RCX = (PyObject *)0x0;
                pPVar8 = (PyObject *)(**(code **)(lVar9 + 8))(self_3,&local_48,1);
              }
              goto LAB_0010408a;
            }
          }
LAB_00104549:
          pPVar8 = __Pyx__PyObject_CallOneArg(func_00,local_48);
        }
LAB_0010408a:
        pPVar7->ob_refcnt = pPVar7->ob_refcnt + -1;
        lVar9 = pPVar7->ob_refcnt;
      }
      if (lVar9 == 0) {
        _Py_Dealloc(pPVar7);
      }
      if (pPVar8 == (PyObject *)0x0) {
        c_line = L'Ԑ';
LAB_001042e6:
        func_00->ob_refcnt = func_00->ob_refcnt + -1;
        if (func_00->ob_refcnt != 0) goto LAB_001040b7;
        pPVar8 = (PyObject *)0x0;
        goto LAB_00104295;
      }
      func_00->ob_refcnt = func_00->ob_refcnt + -1;
      if (func_00->ob_refcnt == 0) {
        _Py_Dealloc(func_00);
      }
      p_Var1 = pPVar8->ob_type->tp_getattro;
      if (p_Var1 == (getattrofunc)0x0) {
        func_00 = (PyObject *)PyObject_GetAttr();
      }
      else {
        func_00 = (*p_Var1)(pPVar8,__pyx_n_s_agg);
      }
      lVar9 = pPVar8->ob_refcnt + -1;
      pPVar8->ob_refcnt = lVar9;
      if (func_00 == (PyObject *)0x0) {
        c_line = L'ԓ';
        if (lVar9 == 0) {
          _Py_Dealloc(pPVar8);
        }
        goto LAB_001040b7;
      }
      if (lVar9 == 0) {
        _Py_Dealloc(pPVar8);
      }
      pPVar8 = __pyx_n_s_F;
      if (__pyx_d[1].ob_type == __pyx_dict_version_15637) {
        if (__pyx_dict_cached_value_15638 != (PyObject *)0x0) goto LAB_00103e71;
        pPVar7 = __Pyx_GetBuiltinName(__pyx_n_s_F);
LAB_0010439f:
        if (pPVar7 == (PyObject *)0x0) {
          c_line = L'Ԗ';
          pPVar8 = (PyObject *)0x0;
          goto LAB_0010428e;
        }
      }
      else {
        __pyx_dict_cached_value_15638 =
             (PyObject *)_PyDict_GetItem_KnownHash(__pyx_d,__pyx_n_s_F,__pyx_n_s_F[1].ob_type);
        __pyx_dict_version_15637 = __pyx_d[1].ob_type;
        if (__pyx_dict_cached_value_15638 == (PyObject *)0x0) {
          lVar9 = PyErr_Occurred();
          if (lVar9 != 0) {
            pPVar8 = (PyObject *)0x0;
            c_line = L'Ԗ';
            goto LAB_0010428e;
          }
          pPVar7 = __Pyx_GetBuiltinName(pPVar8);
          goto LAB_0010439f;
        }
LAB_00103e71:
        pPVar7 = __pyx_dict_cached_value_15638;
        __pyx_dict_cached_value_15638->ob_refcnt = __pyx_dict_cached_value_15638->ob_refcnt + 1;
      }
      p_Var1 = pPVar7->ob_type->tp_getattro;
      if (p_Var1 == (getattrofunc)0x0) {
        pPVar8 = (PyObject *)PyObject_GetAttr();
      }
      else {
        pPVar8 = (*p_Var1)(pPVar7,__pyx_n_s_count);
      }
      if (pPVar8 != (PyObject *)0x0) {
        pPVar7->ob_refcnt = pPVar7->ob_refcnt + -1;
        if (pPVar7->ob_refcnt == 0) {
          _Py_Dealloc(pPVar7);
          pPVar10 = pPVar8->ob_type;
          if (pPVar10 == (PyTypeObject *)&PyMethod_Type) goto LAB_001041b0;
LAB_00103ebb:
          local_48 = __pyx_kp_u_;
          if (pPVar10 == (PyTypeObject *)&PyFunction_Type) {
            pPVar7 = __Pyx_PyFunction_FastCallDict(pPVar8,&local_48,1,in_RCX);
            goto LAB_00103f34;
          }
          if (pPVar10 != (PyTypeObject *)&PyCFunction_Type) {
            iVar6 = PyType_IsSubtype(pPVar10,&PyCFunction_Type);
            if (iVar6 != 0) {
              lVar9 = pPVar8[1].ob_refcnt;
              uVar5 = *(uint *)(lVar9 + 0x10);
              if ((uVar5 & 8) != 0) goto LAB_00103ef3;
              if (pPVar8->ob_type != (PyTypeObject *)&PyCFunction_Type) {
                iVar6 = PyType_IsSubtype(pPVar8->ob_type,&PyCFunction_Type);
                if (iVar6 == 0) goto LAB_001044cb;
                lVar9 = pPVar8[1].ob_refcnt;
                uVar5 = *(uint *)(lVar9 + 0x10);
              }
LAB_001044ba:
              in_RCX = (PyObject *)(ulong)(uVar5 & 0xffffff8d);
              if ((uVar5 & 0xffffff8d) == 0x80) {
                self_1 = (PyObject *)0x0;
                if ((uVar5 & 0x20) == 0) {
                  self_1 = (PyObject *)pPVar8[1].ob_type;
                }
                if ((uVar5 & 2) == 0) {
                  pPVar7 = (PyObject *)(**(code **)(lVar9 + 8))(self_1,&local_48,1);
                }
                else {
                  in_RCX = (PyObject *)0x0;
                  pPVar7 = (PyObject *)(**(code **)(lVar9 + 8))(self_1,&local_48,1);
                }
                goto LAB_00103f34;
              }
            }
LAB_001044cb:
            pPVar7 = __Pyx__PyObject_CallOneArg(pPVar8,local_48);
            goto LAB_00103f34;
          }
          lVar9 = pPVar8[1].ob_refcnt;
          uVar5 = *(uint *)(lVar9 + 0x10);
          if ((uVar5 & 8) == 0) goto LAB_001044ba;
LAB_00103ef3:
          pPVar7 = local_48;
          pcVar4 = *(code **)(lVar9 + 8);
          self = (PyObject *)0x0;
          if ((uVar5 & 0x20) == 0) {
            self = (PyObject *)pPVar8[1].ob_type;
          }
          iVar6 = Py_EnterRecursiveCall(" while calling a Python object");
          if (iVar6 == 0) {
            pPVar7 = (PyObject *)(*pcVar4)(self,pPVar7);
            Py_LeaveRecursiveCall();
            if (pPVar7 != (PyObject *)0x0) goto LAB_00103f34;
            lVar9 = PyErr_Occurred();
            if (lVar9 == 0) {
              c_line = L'ԧ';
              PyErr_SetString(_PyExc_SystemError,"NULL result without error in PyObject_Call");
              goto LAB_0010428e;
            }
          }
        }
        else {
          pPVar10 = pPVar8->ob_type;
          if (pPVar10 != (PyTypeObject *)&PyMethod_Type) goto LAB_00103ebb;
LAB_001041b0:
          pPVar2 = pPVar8[1].ob_type;
          if (pPVar2 == (PyTypeObject *)0x0) goto LAB_00103ebb;
          pPVar3 = (PyObject *)pPVar8[1].ob_refcnt;
          (pPVar2->ob_base).ob_base.ob_refcnt = (pPVar2->ob_base).ob_base.ob_refcnt + 1;
          pPVar3->ob_refcnt = pPVar3->ob_refcnt + 1;
          pPVar8->ob_refcnt = pPVar8->ob_refcnt + -1;
          if (pPVar8->ob_refcnt == 0) {
            _Py_Dealloc(pPVar8);
          }
          pPVar7 = __Pyx_PyObject_Call2Args(pPVar3,(PyObject *)pPVar2,__pyx_kp_u_);
          (pPVar2->ob_base).ob_base.ob_refcnt = (pPVar2->ob_base).ob_base.ob_refcnt + -1;
          pPVar8 = pPVar3;
          if ((pPVar2->ob_base).ob_base.ob_refcnt == 0) {
            _Py_Dealloc(pPVar2);
          }
LAB_00103f34:
          if (pPVar7 != (PyObject *)0x0) {
            pPVar8->ob_refcnt = pPVar8->ob_refcnt + -1;
            if (pPVar8->ob_refcnt == 0) {
              _Py_Dealloc(pPVar8);
            }
            pPVar10 = func_00->ob_type;
            if ((pPVar10 == (PyTypeObject *)&PyMethod_Type) &&
               (pPVar2 = func_00[1].ob_type, pPVar2 != (PyTypeObject *)0x0)) {
              pPVar3 = (PyObject *)func_00[1].ob_refcnt;
              (pPVar2->ob_base).ob_base.ob_refcnt = (pPVar2->ob_base).ob_base.ob_refcnt + 1;
              pPVar3->ob_refcnt = pPVar3->ob_refcnt + 1;
              func_00->ob_refcnt = func_00->ob_refcnt + -1;
              if (func_00->ob_refcnt == 0) {
                _Py_Dealloc(func_00);
              }
              pPVar8 = __Pyx_PyObject_Call2Args(pPVar3,(PyObject *)pPVar2,pPVar7);
              (pPVar2->ob_base).ob_base.ob_refcnt = (pPVar2->ob_base).ob_base.ob_refcnt + -1;
              if ((pPVar2->ob_base).ob_base.ob_refcnt == 0) {
                _Py_Dealloc(pPVar2);
              }
              pPVar7->ob_refcnt = pPVar7->ob_refcnt + -1;
              lVar9 = pPVar7->ob_refcnt;
              func_00 = pPVar3;
            }
            else {
              local_48 = pPVar7;
              if (pPVar10 == (PyTypeObject *)&PyFunction_Type) {
                pPVar8 = __Pyx_PyFunction_FastCallDict(func_00,&local_48,1,in_RCX);
              }
              else if (pPVar10 == (PyTypeObject *)&PyCFunction_Type) {
                lVar9 = func_00[1].ob_refcnt;
                uVar5 = *(uint *)(lVar9 + 0x10);
                if ((uVar5 & 8) == 0) goto LAB_00104443;
LAB_00104110:
                pPVar8 = local_48;
                pcVar4 = *(code **)(lVar9 + 8);
                self_4 = (PyObject *)0x0;
                if ((uVar5 & 0x20) == 0) {
                  self_4 = (PyObject *)func_00[1].ob_type;
                }
                iVar6 = Py_EnterRecursiveCall(" while calling a Python object");
                if (iVar6 == 0) {
                  pPVar8 = (PyObject *)(*pcVar4)(self_4,pPVar8);
                  Py_LeaveRecursiveCall();
                  if (pPVar8 == (PyObject *)0x0) {
                    lVar9 = PyErr_Occurred();
                    if (lVar9 != 0) goto LAB_00104590;
                    PyErr_SetString(_PyExc_SystemError,"NULL result without error in PyObject_Call")
                    ;
                    pPVar8 = (PyObject *)0x0;
                  }
                }
                else {
LAB_00104590:
                  pPVar8 = (PyObject *)0x0;
                }
              }
              else {
                iVar6 = PyType_IsSubtype(pPVar10,&PyCFunction_Type);
                if (iVar6 != 0) {
                  lVar9 = func_00[1].ob_refcnt;
                  uVar5 = *(uint *)(lVar9 + 0x10);
                  if ((uVar5 & 8) != 0) goto LAB_00104110;
                  if (func_00->ob_type != (PyTypeObject *)&PyCFunction_Type) {
                    iVar6 = PyType_IsSubtype(func_00->ob_type,&PyCFunction_Type);
                    if (iVar6 == 0) goto LAB_00104454;
                    lVar9 = func_00[1].ob_refcnt;
                    uVar5 = *(uint *)(lVar9 + 0x10);
                  }
LAB_00104443:
                  if ((uVar5 & 0xffffff8d) == 0x80) {
                    self_5 = (PyObject *)0x0;
                    if ((uVar5 & 0x20) == 0) {
                      self_5 = (PyObject *)func_00[1].ob_type;
                    }
                    if ((uVar5 & 2) == 0) {
                      pPVar8 = (PyObject *)(**(code **)(lVar9 + 8))(self_5,&local_48,1);
                    }
                    else {
                      pPVar8 = (PyObject *)(**(code **)(lVar9 + 8))(self_5,&local_48,1,0);
                    }
                    goto LAB_0010414c;
                  }
                }
LAB_00104454:
                pPVar8 = __Pyx__PyObject_CallOneArg(func_00,local_48);
              }
LAB_0010414c:
              pPVar7->ob_refcnt = pPVar7->ob_refcnt + -1;
              lVar9 = pPVar7->ob_refcnt;
            }
            if (lVar9 == 0) {
              _Py_Dealloc(pPVar7);
            }
            if (pPVar8 != (PyObject *)0x0) {
              func_00->ob_refcnt = func_00->ob_refcnt + -1;
              if (func_00->ob_refcnt == 0) {
                _Py_Dealloc(func_00);
              }
              if (pPVar8->ob_refcnt == 0) {
                _Py_Dealloc(pPVar8);
              }
              goto LAB_00103fbc;
            }
            c_line = L'Է';
            goto LAB_001042e6;
          }
        }
        c_line = L'ԧ';
        goto LAB_0010428e;
      }
      c_line = L'Ԙ';
      lVar9 = func_00->ob_refcnt + -1;
      func_00->ob_refcnt = lVar9;
      if (lVar9 == 0) goto LAB_00104298;
LAB_001042a5:
      pPVar7->ob_refcnt = pPVar7->ob_refcnt + -1;
      if (pPVar7->ob_refcnt == 0) {
        _Py_Dealloc(pPVar7);
      }
    }
    if ((pPVar8 != (PyObject *)0x0) &&
       (pPVar8->ob_refcnt = pPVar8->ob_refcnt + -1, pPVar8->ob_refcnt == 0)) {
      _Py_Dealloc(pPVar8);
    }
  }
LAB_001040b7:
  pPVar8 = (PyObject *)0x0;
  __Pyx_AddTraceback("func_POC.fib",c_line,L'\v',"func_POC.pyx");
LAB_00103fbc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar8;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void _fini(void)

{
  return;
}



