//arat

	STATEMANAGER.SetVertexShader(ms_pntVS);

	// WORK
	LPDIRECT3DVERTEXBUFFER8 lpd3dDeformPNTVtxBuf = __GetDeformableD3DVertexBufferPtr();
	// END_OF_WORK

	LPDIRECT3DVERTEXBUFFER8 lpd3dRigidPNTVtxBuf = m_pModel->GetPNTD3DVertexBuffer();

//değiştir

	STATEMANAGER.SetVertexDeclaration(ms_pntVS);

	// WORK
	LPDIRECT3DVERTEXBUFFER9 lpd3dDeformPNTVtxBuf = __GetDeformableD3DVertexBufferPtr();
	// END_OF_WORK

	LPDIRECT3DVERTEXBUFFER9 lpd3dRigidPNTVtxBuf = m_pModel->GetPNTD3DVertexBuffer();

//arat

	LPDIRECT3DVERTEXBUFFER8 lpd3dDeformPNTVtxBuf = __GetDeformableD3DVertexBufferPtr();
	// END_OF_WORK
	LPDIRECT3DVERTEXBUFFER8 lpd3dRigidPNTVtxBuf = m_pModel->GetPNTD3DVertexBuffer();

 	STATEMANAGER.SetVertexShader(ms_pntVS);

//değiştir

	LPDIRECT3DVERTEXBUFFER9 lpd3dDeformPNTVtxBuf = __GetDeformableD3DVertexBufferPtr();
	// END_OF_WORK
	LPDIRECT3DVERTEXBUFFER9 lpd3dRigidPNTVtxBuf = m_pModel->GetPNTD3DVertexBuffer();

	STATEMANAGER.SetVertexDeclaration(ms_pntVS);

//arat

	STATEMANAGER.SetVertexShader(ms_pntVS);

	// WORK
	LPDIRECT3DVERTEXBUFFER8 lpd3dDeformPNTVtxBuf = __GetDeformableD3DVertexBufferPtr();
	// END_OF_WORK
	LPDIRECT3DVERTEXBUFFER8 lpd3dRigidPNTVtxBuf = m_pModel->GetPNTD3DVertexBuffer();

//değiştir

	STATEMANAGER.SetVertexDeclaration(ms_pntVS);

	// WORK
	LPDIRECT3DVERTEXBUFFER9 lpd3dDeformPNTVtxBuf = __GetDeformableD3DVertexBufferPtr();
	// END_OF_WORK
	LPDIRECT3DVERTEXBUFFER9 lpd3dRigidPNTVtxBuf = m_pModel->GetPNTD3DVertexBuffer();

//arat

	LPDIRECT3DVERTEXBUFFER8 lpd3dDeformPNTVtxBuf = __GetDeformableD3DVertexBufferPtr();
	// END_OF_WORK
	LPDIRECT3DVERTEXBUFFER8 lpd3dRigidPNTVtxBuf = m_pModel->GetPNTD3DVertexBuffer();

 	STATEMANAGER.SetVertexShader(ms_pntVS);

//değiştir

	LPDIRECT3DVERTEXBUFFER9 lpd3dDeformPNTVtxBuf = __GetDeformableD3DVertexBufferPtr();
	// END_OF_WORK
	LPDIRECT3DVERTEXBUFFER9 lpd3dRigidPNTVtxBuf = m_pModel->GetPNTD3DVertexBuffer();

	STATEMANAGER.SetVertexDeclaration(ms_pntVS);

//arat

	STATEMANAGER.SetVertexShader(ms_pntVS);
	STATEMANAGER.SetTexture(0, NULL);
	STATEMANAGER.SetTexture(1, NULL);

	// WORK
	LPDIRECT3DVERTEXBUFFER8 lpd3dDeformPNTVtxBuf = __GetDeformableD3DVertexBufferPtr();
	// END_OF_WORK
	LPDIRECT3DVERTEXBUFFER8 lpd3dRigidPNTVtxBuf = m_pModel->GetPNTD3DVertexBuffer();

//değiştir

	STATEMANAGER.SetVertexDeclaration(ms_pntVS);
	STATEMANAGER.SetTexture(0, NULL);
	STATEMANAGER.SetTexture(1, NULL);

	// WORK
	LPDIRECT3DVERTEXBUFFER9 lpd3dDeformPNTVtxBuf = __GetDeformableD3DVertexBufferPtr();
	// END_OF_WORK
	LPDIRECT3DVERTEXBUFFER9 lpd3dRigidPNTVtxBuf = m_pModel->GetPNTD3DVertexBuffer();

//arat (3 kez)

LPDIRECT3DINDEXBUFFER8

//değiştir (3 kez)

LPDIRECT3DINDEXBUFFER9

//arat (3 kez)

STATEMANAGER.DrawIndexedPrimitive(D3DPT_TRIANGLELIST, 0, vtxCount, pTriGroupNode->idxPos, pTriGroupNode->triCount);

//değiştir (3 kez)

STATEMANAGER.DrawIndexedPrimitive(D3DPT_TRIANGLELIST, vtxMeshBasePos, vtxCount, pTriGroupNode->idxPos, pTriGroupNode->triCount);

