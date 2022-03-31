//arat

	rkD3DPP.FullScreen_PresentationInterval = D3DPRESENT_INTERVAL_IMMEDIATE;

	IDirect3DDevice8& rkD3DDev=*ms_lpd3dDevice;

//değiştir

	rkD3DPP.PresentationInterval = D3DPRESENT_INTERVAL_IMMEDIATE;
	
	IDirect3DDevice9& rkD3DDev=*ms_lpd3dDevice;

//arat (2 kez)

IDirect3DDevice8& rkD3DDev=*ms_lpd3dDevice;

//değiştir (2 kez)

IDirect3DDevice9& rkD3DDev=*ms_lpd3dDevice;

//arat

DWORD CGraphicDevice::CreatePNTStreamVertexShader()

//kod bloğunu komple değiştir

LPDIRECT3DVERTEXDECLARATION9 CGraphicDevice::CreatePNTStreamVertexShader()
{
	assert(ms_lpd3dDevice != NULL);

	LPDIRECT3DVERTEXDECLARATION9 dwShader = NULL;

	D3DVERTEXELEMENT9 pShaderDecl[] = {
		{ 0, 0, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_POSITION, 0 },
		{ 0, 12, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_NORMAL, 0 },
		{ 0, 24, D3DDECLTYPE_FLOAT2, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 0 },
		D3DDECL_END()
	};

	if (ms_lpd3dDevice->CreateVertexDeclaration(pShaderDecl, &dwShader) != D3D_OK)
	{
		char szError[1024];
		sprintf(szError, "Failed to create CreatePNTStreamVertexShader");
		MessageBox(NULL, szError, "Vertex Shader Error", MB_ICONSTOP);
	}

	return dwShader;
}

//arat

DWORD CGraphicDevice::CreatePNT2StreamVertexShader()

//kod bloğunu komple değiştir

LPDIRECT3DVERTEXDECLARATION9 CGraphicDevice::CreatePNT2StreamVertexShader()
{
	assert(ms_lpd3dDevice != NULL);

	LPDIRECT3DVERTEXDECLARATION9 dwShader = NULL;

	D3DVERTEXELEMENT9 pShaderDecl[] = {
		{ 0, 0, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_POSITION, 0 },
		{ 0, 12, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_NORMAL, 0 },
		{ 0, 24, D3DDECLTYPE_FLOAT2, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 0 },
		{ 0, 32, D3DDECLTYPE_FLOAT2, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 1 },
		D3DDECL_END()
	};

	if (ms_lpd3dDevice->CreateVertexDeclaration(pShaderDecl, &dwShader) != D3D_OK)
	{
		char szError[1024];
		sprintf(szError, "Failed to create CreatePNT2StreamVertexShader");
		MessageBox(NULL, szError, "Vertex Shader Error", MB_ICONSTOP);
	}

	return dwShader;
}

//arat

DWORD CGraphicDevice::CreatePTStreamVertexShader()

//kod bloğunu komple değiştir

LPDIRECT3DVERTEXDECLARATION9 CGraphicDevice::CreatePTStreamVertexShader()
{
	assert(ms_lpd3dDevice != NULL);

	LPDIRECT3DVERTEXDECLARATION9 dwShader = NULL;

	D3DVERTEXELEMENT9 pShaderDecl[] = {
		{ 0, 0, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_POSITION, 0 },
		{ 1, 0, D3DDECLTYPE_FLOAT2, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 0 },
		D3DDECL_END()
	};

	if (ms_lpd3dDevice->CreateVertexDeclaration(pShaderDecl, &dwShader) != D3D_OK)
	{
		char szError[1024];
		sprintf(szError, "Failed to create CreatePTStreamVertexShader");
		MessageBox(NULL, szError, "Vertex Shader Error", MB_ICONSTOP);
	}

	return dwShader;
}

//arat

DWORD CGraphicDevice::CreateDoublePNTStreamVertexShader()

//kod bloğunu komple değiştir

LPDIRECT3DVERTEXDECLARATION9 CGraphicDevice::CreateDoublePNTStreamVertexShader()
{
	assert(ms_lpd3dDevice != NULL);

	LPDIRECT3DVERTEXDECLARATION9 dwShader = NULL;

	D3DVERTEXELEMENT9 pShaderDecl[] = {
		{ 0, 0, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_POSITION, 0 },
		{ 0, 12, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_NORMAL, 0 },
		{ 0, 24, D3DDECLTYPE_FLOAT2, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 0 },

		{ 1, 0, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_POSITION, 1 },
		{ 1, 12, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_NORMAL, 1 },
		{ 1, 24, D3DDECLTYPE_FLOAT2, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 1 },
		D3DDECL_END()
	};

	if (ms_lpd3dDevice->CreateVertexDeclaration(pShaderDecl, &dwShader) != D3D_OK)
	{
		char szError[1024];
		sprintf(szError, "Failed to create CreateDoublePNTStreamVertexShader");
		MessageBox(NULL, szError, "Vertex Shader Error", MB_ICONSTOP);
	}

	return dwShader;
}

//arat

static LPDIRECT3DSURFACE8 s_lpStencil;

//değiştir

static LPDIRECT3DSURFACE9 s_lpStencil;

//arat

BOOL EL3D_ConfirmDevice(D3DCAPS8& rkD3DCaps, UINT uBehavior, D3DFORMAT /*eD3DFmt*/)

//değiştir

BOOL EL3D_ConfirmDevice(D3DCAPS9& rkD3DCaps, UINT uBehavior, D3DFORMAT /*eD3DFmt*/)

//arat

D3DADAPTER_IDENTIFIER8& rkD3DAdapterIdentifier=rkD3DAdapterInfo.GetIdentifier();

//değiştir

D3DADAPTER_IDENTIFIER9& rkD3DAdapterIdentifier=rkD3DAdapterInfo.GetIdentifier();

//arat

ms_lpd3d	= Direct3DCreate8(D3D_SDK_VERSION);

//değiştir

ms_lpd3d	= Direct3DCreate9(D3D_SDK_VERSION);

//arat

D3DADAPTER_IDENTIFIER8& rkD3DAdapterId=pkD3DAdapterInfo->GetIdentifier();

//değiştir

D3DADAPTER_IDENTIFIER9& rkD3DAdapterId=pkD3DAdapterInfo->GetIdentifier();

//arat (bool CGraphicDevice::__CreatePDTVertexBufferList() içinde)

			sizeof(TPDTVertex)*PDT_VERTEX_NUM,
			D3DUSAGE_DYNAMIC|D3DUSAGE_WRITEONLY,
			D3DFVF_XYZ|D3DFVF_DIFFUSE|D3DFVF_TEX1,
			D3DPOOL_SYSTEMMEM,
			&ms_alpd3dPDTVB[i])

//değiştir

			sizeof(TPDTVertex)*PDT_VERTEX_NUM, 
			D3DUSAGE_DYNAMIC|D3DUSAGE_WRITEONLY, 
			D3DFVF_XYZ|D3DFVF_DIFFUSE|D3DFVF_TEX1, 
			D3DPOOL_SYSTEMMEM, 
			&ms_alpd3dPDTVB[i], NULL)

//arat (bool CGraphicDevice::__CreateDefaultIndexBuffer) içinde

	if (FAILED(
		ms_lpd3dDevice->CreateIndexBuffer(
			sizeof(WORD)*uIdxCount,
			D3DUSAGE_WRITEONLY,
			D3DFMT_INDEX16,
			D3DPOOL_MANAGED,
			&ms_alpd3dDefIB[eDefIB])
	)) return false;

	WORD* dstIndices;
	if (FAILED(
		ms_alpd3dDefIB[eDefIB]->Lock(0, 0, (BYTE**)&dstIndices, 0)
	)) return false;

//değiştir

	if (FAILED(
		ms_lpd3dDevice->CreateIndexBuffer(
			sizeof(WORD)*uIdxCount,
			D3DUSAGE_WRITEONLY,
			D3DFMT_INDEX16,
			D3DPOOL_MANAGED,
			&ms_alpd3dDefIB[eDefIB], NULL)
	)) return false;

	WORD* dstIndices;
	if (FAILED(
		ms_alpd3dDefIB[eDefIB]->Lock(0, 0, (void**)&dstIndices, 0)
	)) return false;

//arat

	if (ms_ptVS)
	{
		ms_lpd3dDevice->DeleteVertexShader(ms_ptVS);
		ms_ptVS = 0;;
	}

	if (ms_pntVS)
	{
		ms_lpd3dDevice->DeleteVertexShader(ms_pntVS);
		ms_pntVS = 0;
	}

	if (ms_pnt2VS)
	{
		ms_lpd3dDevice->DeleteVertexShader(ms_pnt2VS);
		ms_pnt2VS = 0;
	}

//değiştir

	if (ms_ptVS)
	{	
		ms_ptVS->Release();
		ms_ptVS = 0;;
	}

	if (ms_pntVS)
	{
		ms_pntVS->Release();
		ms_pntVS = 0;
	}

	if (ms_pnt2VS)
	{
		ms_pnt2VS->Release();
		ms_pnt2VS = 0;
	}