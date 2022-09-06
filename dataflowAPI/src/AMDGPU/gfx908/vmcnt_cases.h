case amdgpu_gfx908_op_SCRATCH_LOAD_UBYTE:
case amdgpu_gfx908_op_SCRATCH_LOAD_SBYTE:
case amdgpu_gfx908_op_SCRATCH_LOAD_USHORT:
case amdgpu_gfx908_op_SCRATCH_LOAD_SSHORT:
case amdgpu_gfx908_op_SCRATCH_LOAD_DWORD:
case amdgpu_gfx908_op_SCRATCH_LOAD_DWORDX2:
case amdgpu_gfx908_op_SCRATCH_LOAD_DWORDX3:
case amdgpu_gfx908_op_SCRATCH_LOAD_DWORDX4:
case amdgpu_gfx908_op_SCRATCH_STORE_BYTE:
case amdgpu_gfx908_op_SCRATCH_STORE_BYTE_D16_HI:
case amdgpu_gfx908_op_SCRATCH_STORE_SHORT:
case amdgpu_gfx908_op_SCRATCH_STORE_SHORT_D16_HI:
case amdgpu_gfx908_op_SCRATCH_STORE_DWORD:
case amdgpu_gfx908_op_SCRATCH_STORE_DWORDX2:
case amdgpu_gfx908_op_SCRATCH_STORE_DWORDX3:
case amdgpu_gfx908_op_SCRATCH_STORE_DWORDX4:
case amdgpu_gfx908_op_SCRATCH_LOAD_UBYTE_D16:
case amdgpu_gfx908_op_SCRATCH_LOAD_UBYTE_D16_HI:
case amdgpu_gfx908_op_SCRATCH_LOAD_SBYTE_D16:
case amdgpu_gfx908_op_SCRATCH_LOAD_SBYTE_D16_HI:
case amdgpu_gfx908_op_SCRATCH_LOAD_SHORT_D16:
case amdgpu_gfx908_op_SCRATCH_LOAD_SHORT_D16_HI:
case amdgpu_gfx908_op_IMAGE_LOAD:
case amdgpu_gfx908_op_IMAGE_LOAD_MIP:
case amdgpu_gfx908_op_IMAGE_LOAD_PCK:
case amdgpu_gfx908_op_IMAGE_LOAD_PCK_SGN:
case amdgpu_gfx908_op_IMAGE_LOAD_MIP_PCK:
case amdgpu_gfx908_op_IMAGE_LOAD_MIP_PCK_SGN:
case amdgpu_gfx908_op_IMAGE_STORE:
case amdgpu_gfx908_op_IMAGE_STORE_MIP:
case amdgpu_gfx908_op_IMAGE_STORE_PCK:
case amdgpu_gfx908_op_IMAGE_STORE_MIP_PCK:
case amdgpu_gfx908_op_IMAGE_GET_RESINFO:
case amdgpu_gfx908_op_IMAGE_ATOMIC_SWAP:
case amdgpu_gfx908_op_IMAGE_ATOMIC_CMPSWAP:
case amdgpu_gfx908_op_IMAGE_ATOMIC_ADD:
case amdgpu_gfx908_op_IMAGE_ATOMIC_SUB:
case amdgpu_gfx908_op_IMAGE_ATOMIC_SMIN:
case amdgpu_gfx908_op_IMAGE_ATOMIC_UMIN:
case amdgpu_gfx908_op_IMAGE_ATOMIC_SMAX:
case amdgpu_gfx908_op_IMAGE_ATOMIC_UMAX:
case amdgpu_gfx908_op_IMAGE_ATOMIC_AND:
case amdgpu_gfx908_op_IMAGE_ATOMIC_OR:
case amdgpu_gfx908_op_IMAGE_ATOMIC_XOR:
case amdgpu_gfx908_op_IMAGE_ATOMIC_INC:
case amdgpu_gfx908_op_IMAGE_ATOMIC_DEC:
case amdgpu_gfx908_op_IMAGE_SAMPLE:
case amdgpu_gfx908_op_IMAGE_SAMPLE_CL:
case amdgpu_gfx908_op_IMAGE_SAMPLE_D:
case amdgpu_gfx908_op_IMAGE_SAMPLE_D_CL:
case amdgpu_gfx908_op_IMAGE_SAMPLE_L:
case amdgpu_gfx908_op_IMAGE_SAMPLE_B:
case amdgpu_gfx908_op_IMAGE_SAMPLE_B_CL:
case amdgpu_gfx908_op_IMAGE_SAMPLE_LZ:
case amdgpu_gfx908_op_IMAGE_SAMPLE_C:
case amdgpu_gfx908_op_IMAGE_SAMPLE_C_CL:
case amdgpu_gfx908_op_IMAGE_SAMPLE_C_D:
case amdgpu_gfx908_op_IMAGE_SAMPLE_C_D_CL:
case amdgpu_gfx908_op_IMAGE_SAMPLE_C_L:
case amdgpu_gfx908_op_IMAGE_SAMPLE_C_B:
case amdgpu_gfx908_op_IMAGE_SAMPLE_C_B_CL:
case amdgpu_gfx908_op_IMAGE_SAMPLE_C_LZ:
case amdgpu_gfx908_op_IMAGE_SAMPLE_O:
case amdgpu_gfx908_op_IMAGE_SAMPLE_CL_O:
case amdgpu_gfx908_op_IMAGE_SAMPLE_D_O:
case amdgpu_gfx908_op_IMAGE_SAMPLE_D_CL_O:
case amdgpu_gfx908_op_IMAGE_SAMPLE_L_O:
case amdgpu_gfx908_op_IMAGE_SAMPLE_B_O:
case amdgpu_gfx908_op_IMAGE_SAMPLE_B_CL_O:
case amdgpu_gfx908_op_IMAGE_SAMPLE_LZ_O:
case amdgpu_gfx908_op_IMAGE_SAMPLE_C_O:
case amdgpu_gfx908_op_IMAGE_SAMPLE_C_CL_O:
case amdgpu_gfx908_op_IMAGE_SAMPLE_C_D_O:
case amdgpu_gfx908_op_IMAGE_SAMPLE_C_D_CL_O:
case amdgpu_gfx908_op_IMAGE_SAMPLE_C_L_O:
case amdgpu_gfx908_op_IMAGE_SAMPLE_C_B_O:
case amdgpu_gfx908_op_IMAGE_SAMPLE_C_B_CL_O:
case amdgpu_gfx908_op_IMAGE_SAMPLE_C_LZ_O:
case amdgpu_gfx908_op_IMAGE_GATHER4:
case amdgpu_gfx908_op_IMAGE_GATHER4_CL:
case amdgpu_gfx908_op_IMAGE_GATHER4H:
case amdgpu_gfx908_op_IMAGE_GATHER4_L:
case amdgpu_gfx908_op_IMAGE_GATHER4_B:
case amdgpu_gfx908_op_IMAGE_GATHER4_B_CL:
case amdgpu_gfx908_op_IMAGE_GATHER4_LZ:
case amdgpu_gfx908_op_IMAGE_GATHER4_C:
case amdgpu_gfx908_op_IMAGE_GATHER4_C_CL:
case amdgpu_gfx908_op_IMAGE_GATHER4H_PCK:
case amdgpu_gfx908_op_IMAGE_GATHER8H_PCK:
case amdgpu_gfx908_op_IMAGE_GATHER4_C_L:
case amdgpu_gfx908_op_IMAGE_GATHER4_C_B:
case amdgpu_gfx908_op_IMAGE_GATHER4_C_B_CL:
case amdgpu_gfx908_op_IMAGE_GATHER4_C_LZ:
case amdgpu_gfx908_op_IMAGE_GATHER4_O:
case amdgpu_gfx908_op_IMAGE_GATHER4_CL_O:
case amdgpu_gfx908_op_IMAGE_GATHER4_L_O:
case amdgpu_gfx908_op_IMAGE_GATHER4_B_O:
case amdgpu_gfx908_op_IMAGE_GATHER4_B_CL_O:
case amdgpu_gfx908_op_IMAGE_GATHER4_LZ_O:
case amdgpu_gfx908_op_IMAGE_GATHER4_C_O:
case amdgpu_gfx908_op_IMAGE_GATHER4_C_CL_O:
case amdgpu_gfx908_op_IMAGE_GATHER4_C_L_O:
case amdgpu_gfx908_op_IMAGE_GATHER4_C_B_O:
case amdgpu_gfx908_op_IMAGE_GATHER4_C_B_CL_O:
case amdgpu_gfx908_op_IMAGE_GATHER4_C_LZ_O:
case amdgpu_gfx908_op_IMAGE_GET_LOD:
case amdgpu_gfx908_op_IMAGE_SAMPLE_CD:
case amdgpu_gfx908_op_IMAGE_SAMPLE_CD_CL:
case amdgpu_gfx908_op_IMAGE_SAMPLE_C_CD:
case amdgpu_gfx908_op_IMAGE_SAMPLE_C_CD_CL:
case amdgpu_gfx908_op_IMAGE_SAMPLE_CD_O:
case amdgpu_gfx908_op_IMAGE_SAMPLE_CD_CL_O:
case amdgpu_gfx908_op_IMAGE_SAMPLE_C_CD_O:
case amdgpu_gfx908_op_IMAGE_SAMPLE_C_CD_CL_O:
case amdgpu_gfx908_op_BUFFER_LOAD_FORMAT_X:
case amdgpu_gfx908_op_BUFFER_LOAD_FORMAT_XY:
case amdgpu_gfx908_op_BUFFER_LOAD_FORMAT_XYZ:
case amdgpu_gfx908_op_BUFFER_LOAD_FORMAT_XYZW:
case amdgpu_gfx908_op_BUFFER_STORE_FORMAT_X:
case amdgpu_gfx908_op_BUFFER_STORE_FORMAT_XY:
case amdgpu_gfx908_op_BUFFER_STORE_FORMAT_XYZ:
case amdgpu_gfx908_op_BUFFER_STORE_FORMAT_XYZW:
case amdgpu_gfx908_op_BUFFER_LOAD_FORMAT_D16_X:
case amdgpu_gfx908_op_BUFFER_LOAD_FORMAT_D16_XY:
case amdgpu_gfx908_op_BUFFER_LOAD_FORMAT_D16_XYZ:
case amdgpu_gfx908_op_BUFFER_LOAD_FORMAT_D16_XYZW:
case amdgpu_gfx908_op_BUFFER_STORE_FORMAT_D16_X:
case amdgpu_gfx908_op_BUFFER_STORE_FORMAT_D16_XY:
case amdgpu_gfx908_op_BUFFER_STORE_FORMAT_D16_XYZ:
case amdgpu_gfx908_op_BUFFER_STORE_FORMAT_D16_XYZW:
case amdgpu_gfx908_op_BUFFER_LOAD_UBYTE:
case amdgpu_gfx908_op_BUFFER_LOAD_SBYTE:
case amdgpu_gfx908_op_BUFFER_LOAD_USHORT:
case amdgpu_gfx908_op_BUFFER_LOAD_SSHORT:
case amdgpu_gfx908_op_BUFFER_LOAD_DWORD:
case amdgpu_gfx908_op_BUFFER_LOAD_DWORDX2:
case amdgpu_gfx908_op_BUFFER_LOAD_DWORDX3:
case amdgpu_gfx908_op_BUFFER_LOAD_DWORDX4:
case amdgpu_gfx908_op_BUFFER_STORE_BYTE:
case amdgpu_gfx908_op_BUFFER_STORE_BYTE_D16_HI:
case amdgpu_gfx908_op_BUFFER_STORE_SHORT:
case amdgpu_gfx908_op_BUFFER_STORE_SHORT_D16_HI:
case amdgpu_gfx908_op_BUFFER_STORE_DWORD:
case amdgpu_gfx908_op_BUFFER_STORE_DWORDX2:
case amdgpu_gfx908_op_BUFFER_STORE_DWORDX3:
case amdgpu_gfx908_op_BUFFER_STORE_DWORDX4:
case amdgpu_gfx908_op_BUFFER_LOAD_UBYTE_D16:
case amdgpu_gfx908_op_BUFFER_LOAD_UBYTE_D16_HI:
case amdgpu_gfx908_op_BUFFER_LOAD_SBYTE_D16:
case amdgpu_gfx908_op_BUFFER_LOAD_SBYTE_D16_HI:
case amdgpu_gfx908_op_BUFFER_LOAD_SHORT_D16:
case amdgpu_gfx908_op_BUFFER_LOAD_SHORT_D16_HI:
case amdgpu_gfx908_op_BUFFER_LOAD_FORMAT_D16_HI_X:
case amdgpu_gfx908_op_BUFFER_STORE_FORMAT_D16_HI_X:
case amdgpu_gfx908_op_BUFFER_STORE_LDS_DWORD:
case amdgpu_gfx908_op_BUFFER_WBINVL1:
case amdgpu_gfx908_op_BUFFER_WBINVL1_VOL:
case amdgpu_gfx908_op_BUFFER_ATOMIC_SWAP:
case amdgpu_gfx908_op_BUFFER_ATOMIC_CMPSWAP:
case amdgpu_gfx908_op_BUFFER_ATOMIC_ADD:
case amdgpu_gfx908_op_BUFFER_ATOMIC_SUB:
case amdgpu_gfx908_op_BUFFER_ATOMIC_SMIN:
case amdgpu_gfx908_op_BUFFER_ATOMIC_UMIN:
case amdgpu_gfx908_op_BUFFER_ATOMIC_SMAX:
case amdgpu_gfx908_op_BUFFER_ATOMIC_UMAX:
case amdgpu_gfx908_op_BUFFER_ATOMIC_AND:
case amdgpu_gfx908_op_BUFFER_ATOMIC_OR:
case amdgpu_gfx908_op_BUFFER_ATOMIC_XOR:
case amdgpu_gfx908_op_BUFFER_ATOMIC_INC:
case amdgpu_gfx908_op_BUFFER_ATOMIC_DEC:
case amdgpu_gfx908_op_BUFFER_ATOMIC_ADD_F32:
case amdgpu_gfx908_op_BUFFER_ATOMIC_PK_ADD_F16:
case amdgpu_gfx908_op_BUFFER_ATOMIC_SWAP_X2:
case amdgpu_gfx908_op_BUFFER_ATOMIC_CMPSWAP_X2:
case amdgpu_gfx908_op_BUFFER_ATOMIC_ADD_X2:
case amdgpu_gfx908_op_BUFFER_ATOMIC_SUB_X2:
case amdgpu_gfx908_op_BUFFER_ATOMIC_SMIN_X2:
case amdgpu_gfx908_op_BUFFER_ATOMIC_UMIN_X2:
case amdgpu_gfx908_op_BUFFER_ATOMIC_SMAX_X2:
case amdgpu_gfx908_op_BUFFER_ATOMIC_UMAX_X2:
case amdgpu_gfx908_op_BUFFER_ATOMIC_AND_X2:
case amdgpu_gfx908_op_BUFFER_ATOMIC_OR_X2:
case amdgpu_gfx908_op_BUFFER_ATOMIC_XOR_X2:
case amdgpu_gfx908_op_BUFFER_ATOMIC_INC_X2:
case amdgpu_gfx908_op_BUFFER_ATOMIC_DEC_X2:
case amdgpu_gfx908_op_TBUFFER_LOAD_FORMAT_X:
case amdgpu_gfx908_op_TBUFFER_LOAD_FORMAT_XY:
case amdgpu_gfx908_op_TBUFFER_LOAD_FORMAT_XYZ:
case amdgpu_gfx908_op_TBUFFER_LOAD_FORMAT_XYZW:
case amdgpu_gfx908_op_TBUFFER_STORE_FORMAT_X:
case amdgpu_gfx908_op_TBUFFER_STORE_FORMAT_XY:
case amdgpu_gfx908_op_TBUFFER_STORE_FORMAT_XYZ:
case amdgpu_gfx908_op_TBUFFER_STORE_FORMAT_XYZW:
case amdgpu_gfx908_op_TBUFFER_LOAD_FORMAT_D16_X:
case amdgpu_gfx908_op_TBUFFER_LOAD_FORMAT_D16_XY:
case amdgpu_gfx908_op_TBUFFER_LOAD_FORMAT_D16_XYZ:
case amdgpu_gfx908_op_TBUFFER_LOAD_FORMAT_D16_XYZW:
case amdgpu_gfx908_op_TBUFFER_STORE_FORMAT_D16_X:
case amdgpu_gfx908_op_TBUFFER_STORE_FORMAT_D16_XY:
case amdgpu_gfx908_op_TBUFFER_STORE_FORMAT_D16_XYZ:
case amdgpu_gfx908_op_TBUFFER_STORE_FORMAT_D16_XYZW:
