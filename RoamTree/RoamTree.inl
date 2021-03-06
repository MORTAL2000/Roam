#if !defined( ROAMTREE_INL_INCLUDED )
#define ROAMTREE_INL_INCLUDED

#pragma once

/** @file *//********************************************************************************************************

                                                     RoamTree.inl

						                    Copyright 2003, John J. Bolton
	--------------------------------------------------------------------------------------------------------------

	$Header: //depot/Roam/RoamTree/RoamTree.inl#1 $

	$NoKeywords: $

*********************************************************************************************************************/

#include "RoamTree.h"


/********************************************************************************************************************/
/*																													*/
/*																													*/
/********************************************************************************************************************/

inline RoamTree::Node * RoamTree::Root()
{
	return static_cast< Node * >( BinaryTree::Root() );
}


/********************************************************************************************************************/
/*																													*/
/*																													*/
/********************************************************************************************************************/

inline RoamTree::Node const * RoamTree::Root() const
{
	return static_cast< Node const * >( BinaryTree::Root() );
}


/********************************************************************************************************************/
/*																													*/
/*																													*/
/********************************************************************************************************************/

inline RoamTree::Node * RoamTree::FirstLeaf()
{
	return static_cast< Node * >( BinaryTree::FirstLeaf() );
}


/********************************************************************************************************************/
/*																													*/
/*																													*/
/********************************************************************************************************************/

inline RoamTree::Node const * RoamTree::FirstLeaf() const
{
	return static_cast< Node const * >( BinaryTree::FirstLeaf() );
}


/********************************************************************************************************************/
/*																													*/
/*																													*/
/********************************************************************************************************************/

inline RoamTree::Node * RoamTree::NextLeaf( Node * pNode )
{
	return static_cast< Node * >( BinaryTree::NextLeaf( pNode ) );
}


/********************************************************************************************************************/
/*																													*/
/*																													*/
/********************************************************************************************************************/

inline RoamTree::Node const * RoamTree::NextLeaf( Node const * pNode ) const
{
	return static_cast< Node const * >( BinaryTree::NextLeaf( pNode ) );
}


/********************************************************************************************************************/
/*																													*/
/*																													*/
/********************************************************************************************************************/

inline RoamTree::Node * RoamTree::Node::Parent()
{
	return static_cast< Node * >( m_pParent );
}


/********************************************************************************************************************/
/*																													*/
/*																													*/
/********************************************************************************************************************/

inline RoamTree::Node const * RoamTree::Node::Parent() const
{
	return static_cast< Node const * >( m_pParent );
}


/********************************************************************************************************************/
/*																													*/
/*																													*/
/********************************************************************************************************************/

inline RoamTree::Node * RoamTree::Node::LeftChild()
{
	return static_cast< Node * >( m_pLeftChild );
}


/********************************************************************************************************************/
/*																													*/
/*																													*/
/********************************************************************************************************************/

inline RoamTree::Node const * RoamTree::Node::LeftChild() const
{
	return static_cast< Node const * >( m_pLeftChild );
}


/********************************************************************************************************************/
/*																													*/
/*																													*/
/********************************************************************************************************************/

inline RoamTree::Node * RoamTree::Node::RightChild()
{
	return static_cast< Node * >( m_pRightChild );
}


/********************************************************************************************************************/
/*																													*/
/*																													*/
/********************************************************************************************************************/

inline RoamTree::Node const * RoamTree::Node::RightChild() const
{
	return static_cast< Node const * >( m_pRightChild );
}


/********************************************************************************************************************/
/*																													*/
/*																													*/
/********************************************************************************************************************/

inline void RoamTree::Node::SetBottomNeighbor( Node * pBottomNeighbor )
{
	m_pBottomNeighbor = pBottomNeighbor;
}


/********************************************************************************************************************/
/*																													*/
/*																													*/
/********************************************************************************************************************/

inline RoamTree::Node * RoamTree::Node::BottomNeighbor()
{
	return m_pBottomNeighbor;
}


/********************************************************************************************************************/
/*																													*/
/*																													*/
/********************************************************************************************************************/

inline RoamTree::Node const * RoamTree::Node::BottomNeighbor() const
{
	return m_pBottomNeighbor;
}


/********************************************************************************************************************/
/*																													*/
/*																													*/
/********************************************************************************************************************/

inline void RoamTree::Node::SetLeftNeighbor( Node * pLeftNeighbor )
{
	m_pLeftNeighbor = pLeftNeighbor;
}


/********************************************************************************************************************/
/*																													*/
/*																													*/
/********************************************************************************************************************/

inline RoamTree::Node * RoamTree::Node::LeftNeighbor()
{
	return m_pLeftNeighbor;
}


/********************************************************************************************************************/
/*																													*/
/*																													*/
/********************************************************************************************************************/

inline RoamTree::Node const * RoamTree::Node::LeftNeighbor() const
{
	return m_pLeftNeighbor;
}


/********************************************************************************************************************/
/*																													*/
/*																													*/
/********************************************************************************************************************/

inline void RoamTree::Node::SetRightNeighbor( Node * pRightNeighbor )
{
	m_pRightNeighbor = pRightNeighbor;
}


/********************************************************************************************************************/
/*																													*/
/*																													*/
/********************************************************************************************************************/

inline RoamTree::Node * RoamTree::Node::RightNeighbor()
{
	return m_pRightNeighbor;
}


/********************************************************************************************************************/
/*																													*/
/*																													*/
/********************************************************************************************************************/

inline RoamTree::Node const * RoamTree::Node::RightNeighbor() const
{
	return m_pRightNeighbor;
}


/********************************************************************************************************************/
/*																													*/
/*																													*/
/********************************************************************************************************************/

inline DataTree::Node const *	RoamTree::Node::GetData() const
{
	return m_pData;
}


/********************************************************************************************************************/
/*																													*/
/*																													*/
/********************************************************************************************************************/

inline GridTriangle const &	RoamTree::Node::GetGridTriangle() const
{
	return m_pData->m_Gt;
}


/********************************************************************************************************************/
/*																													*/
/*																													*/
/********************************************************************************************************************/

inline Vector3 const & RoamTree::Node::GetNormal() const
{
	return m_pData->m_Normal;
}


/********************************************************************************************************************/
/*																													*/
/*																													*/
/********************************************************************************************************************/

inline float RoamTree::Node::GetMaxVariance() const
{
	return m_pData->m_MaxVariance;
}


/********************************************************************************************************************/
/*																													*/
/*																													*/
/********************************************************************************************************************/

inline Glx::TLVertex const * RoamTree::Node::GetV0() const
{
	return m_pData->m_pV0;
}


/********************************************************************************************************************/
/*																													*/
/*																													*/
/********************************************************************************************************************/

inline Glx::TLVertex const * RoamTree::Node::GetV1() const
{
	return m_pData->m_pV1;
}


/********************************************************************************************************************/
/*																													*/
/*																													*/
/********************************************************************************************************************/

inline Glx::TLVertex const * RoamTree::Node::GetV2() const
{
	return m_pData->m_pV2;
}



#endif // !defined( ROAMTREE_INL_INCLUDED )
