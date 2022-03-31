//arat (10 kez)

STATEMANAGER.SetVertexShader(D3DFVF_XYZ|D3DFVF_DIFFUSE|D3DFVF_TEX1);

//değiştir (10 kez)

STATEMANAGER.SetFVF(D3DFVF_XYZ|D3DFVF_DIFFUSE|D3DFVF_TEX1);

//arat

ms_lpd3dDevice->SetVertexShader(m_dwVS);

//değiştir

ms_lpd3dDevice->SetFVF(m_dwVS);

//arat

	LPDIRECT3DINDEXBUFFER8 lpIndexBuffer;
	LPDIRECT3DVERTEXBUFFER8 lpVertexBuffer;

//değiştir

	LPDIRECT3DINDEXBUFFER9 lpIndexBuffer;
	LPDIRECT3DVERTEXBUFFER9 lpVertexBuffer;

//arat

STATEMANAGER.SetVertexShader(lpMesh->GetFVF());

//değiştir

STATEMANAGER.SetFVF(lpMesh->GetFVF());

//arat

IDirect3DDevice8 & rkD3DDev = *ms_lpd3dDevice;

//değiştir

IDirect3DDevice9 & rkD3DDev = *ms_lpd3dDevice;

//arat

	IDirect3D8 & rkD3D = *ms_lpd3d;
	IDirect3DDevice8 & rkD3DDev = *ms_lpd3dDevice;

//değiştir

	IDirect3D9 & rkD3D = *ms_lpd3d;
	IDirect3DDevice9 & rkD3DDev = *ms_lpd3dDevice;