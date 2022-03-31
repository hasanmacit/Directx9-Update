//arat

LPDIRECT3D8 CPythonGraphic::GetD3D()

//değiştir

LPDIRECT3D9 CPythonGraphic::GetD3D()

//arat

	STATEMANAGER.SetTextureStageState(0, D3DTSS_MINFILTER, D3DTEXF_NONE);
	STATEMANAGER.SetTextureStageState(0, D3DTSS_MAGFILTER, D3DTEXF_NONE);
	STATEMANAGER.SetTextureStageState(0, D3DTSS_MIPFILTER, D3DTEXF_NONE);

//değiştir

	STATEMANAGER.SetSamplerState(0, D3DSAMP_MINFILTER, D3DTEXF_NONE);
	STATEMANAGER.SetSamplerState(0, D3DSAMP_MAGFILTER, D3DTEXF_NONE);
	STATEMANAGER.SetSamplerState(0, D3DSAMP_MIPFILTER, D3DTEXF_NONE);

//arat

	STATEMANAGER.SetTextureStageState(0, D3DTSS_MINFILTER, D3DTEXF_LINEAR);
	STATEMANAGER.SetTextureStageState(0, D3DTSS_MAGFILTER, D3DTEXF_LINEAR);
	STATEMANAGER.SetTextureStageState(0, D3DTSS_MIPFILTER, D3DTEXF_LINEAR);

//değiştir

	STATEMANAGER.SetSamplerState(0, D3DSAMP_MINFILTER, D3DTEXF_LINEAR);
	STATEMANAGER.SetSamplerState(0, D3DSAMP_MAGFILTER, D3DTEXF_LINEAR);
	STATEMANAGER.SetSamplerState(0, D3DSAMP_MIPFILTER, D3DTEXF_LINEAR);

//arat

D3DMATERIAL8 Material;

//değiştir

D3DMATERIAL9 Material;

//arat

D3DLIGHT8 Light;

//değiştir

D3DLIGHT9 Light;

//arat

D3DVIEWPORT8 ViewPort;

//değiştir

D3DVIEWPORT9 ViewPort;

//arat

D3DCAPS8		d3dCaps;

//değiştir

D3DCAPS9		d3dCaps;

//arat

ms_lpd3dDevice->SetGammaRamp(D3DSGR_NO_CALIBRATION, &NewRamp);

//değiştir

ms_lpd3dDevice->SetGammaRamp(0, D3DSGR_NO_CALIBRATION, &NewRamp);

//arat

LPDIRECT3DSURFACE8 lpSurface;

//değiştir

LPDIRECT3DSURFACE9 lpSurface;

//arat

if (FAILED(hr = ms_lpd3dDevice->GetBackBuffer(0, D3DBACKBUFFER_TYPE_MONO, &lpSurface)))

//değiştir

if (FAILED(hr = ms_lpd3dDevice->GetBackBuffer(0, 0, D3DBACKBUFFER_TYPE_MONO, &lpSurface)))

//arat

imgDescLen, // textLen[0],

//değiştir

static_cast<unsigned char>(imgDescLen), // textLen[0],

//arat

STATEMANAGER.SetVertexShader(ms_pntVS);

//değiştir

STATEMANAGER.SetVertexDeclaration(ms_pntVS);

//arat

STATEMANAGER.SetVertexShader(D3DFVF_XYZ|D3DFVF_DIFFUSE|D3DFVF_TEX1);

//değiştir

STATEMANAGER.SetFVF(D3DFVF_XYZ|D3DFVF_DIFFUSE|D3DFVF_TEX1);

//arat

memset(&m_backupViewport, 0, sizeof(D3DVIEWPORT8));

//değiştir

memset(&m_backupViewport, 0, sizeof(D3DVIEWPORT9));