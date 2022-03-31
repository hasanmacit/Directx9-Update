//arat

LPDIRECT3D8				CGraphicBase::ms_lpd3d = NULL;
LPDIRECT3DDEVICE8		CGraphicBase::ms_lpd3dDevice = NULL;
ID3DXMatrixStack *		CGraphicBase::ms_lpd3dMatStack = NULL;
D3DPRESENT_PARAMETERS	CGraphicBase::ms_d3dPresentParameter;
D3DVIEWPORT8			CGraphicBase::ms_Viewport;

//değiştir

LPDIRECT3D9				CGraphicBase::ms_lpd3d = NULL;
LPDIRECT3DDEVICE9		CGraphicBase::ms_lpd3dDevice = NULL;
ID3DXMatrixStack *		CGraphicBase::ms_lpd3dMatStack = NULL;
D3DPRESENT_PARAMETERS	CGraphicBase::ms_d3dPresentParameter;
D3DVIEWPORT9			CGraphicBase::ms_Viewport;

//arat

D3DCAPS8				CGraphicBase::ms_d3dCaps;

//değiştir

D3DCAPS9				CGraphicBase::ms_d3dCaps;

//arat

DWORD					CGraphicBase::ms_ptVS = 0;
DWORD					CGraphicBase::ms_pntVS = 0;
DWORD					CGraphicBase::ms_pnt2VS = 0;

//değiştir

LPDIRECT3DVERTEXDECLARATION9 CGraphicBase::ms_ptVS = 0;
LPDIRECT3DVERTEXDECLARATION9 CGraphicBase::ms_pntVS = 0;
LPDIRECT3DVERTEXDECLARATION9 CGraphicBase::ms_pnt2VS = 0;

//arat

LPDIRECT3DVERTEXBUFFER8	CGraphicBase::ms_alpd3dPDTVB[PDT_VERTEXBUFFER_NUM];

LPDIRECT3DINDEXBUFFER8	CGraphicBase::ms_alpd3dDefIB[DEFAULT_IB_NUM];

//değiştir

LPDIRECT3DVERTEXBUFFER9	CGraphicBase::ms_alpd3dPDTVB[PDT_VERTEXBUFFER_NUM];

LPDIRECT3DINDEXBUFFER9	CGraphicBase::ms_alpd3dDefIB[DEFAULT_IB_NUM];

//arat

IDirect3DVertexBuffer8

//değiştir

IDirect3DVertexBuffer9

//arat

plpd3dFillRectVB->Lock(0, sizeof(TPDTVertex)*uVtxCount, (BYTE**)&pDstVertices, D3DLOCK_DISCARD)

//değiştir

plpd3dFillRectVB->Lock(0, sizeof(TPDTVertex)*uVtxCount, (void**)&pDstVertices, D3DLOCK_DISCARD)