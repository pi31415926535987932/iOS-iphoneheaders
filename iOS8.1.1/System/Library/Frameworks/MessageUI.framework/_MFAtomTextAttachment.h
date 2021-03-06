/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:38 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIFoundation/NSTextAttachment.h>

@class NSAttributedString, MFModernComposeRecipientAtom, MFComposeRecipient;

@interface _MFAtomTextAttachment : NSTextAttachment {

	NSAttributedString* _attributedString;
	BOOL _isPlaceholder;
	MFModernComposeRecipientAtom* _atomView;

}

@property (assign,nonatomic) BOOL isPlaceholder;                                   //@synthesize isPlaceholder=_isPlaceholder - In the implementation block
@property (nonatomic,retain) MFModernComposeRecipientAtom * atomView;              //@synthesize atomView=_atomView - In the implementation block
@property (nonatomic,readonly) MFComposeRecipient * recipient; 
-(MFModernComposeRecipientAtom *)atomView;
-(id)initWithAtomView:(id)arg1 ;
-(id)attributedStringWithBaseAttributes:(id)arg1 ;
-(void)setAtomView:(MFModernComposeRecipientAtom *)arg1 ;
-(id)imageForBounds:(CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3 ;
-(CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(void)dealloc;
-(MFComposeRecipient *)recipient;
-(BOOL)isPlaceholder;
-(void)setIsPlaceholder:(BOOL)arg1 ;
@end

