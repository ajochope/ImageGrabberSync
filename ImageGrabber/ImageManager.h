//
//  ImageManager.h
//  ImageGrabber
//
//  Created by Ray Wenderlich on 7/3/11.
//  Copyright 2011 Ray Wenderlich. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol ImageManagerDelegate 
- (void)imageInfosAvailable:(NSArray *)imageInfos done:(BOOL)done;
@end

@interface ImageManager : NSObject {
    int pendingZips;
}

@property (retain) NSString * html;
@property (assign) id<ImageManagerDelegate> delegate;

- (id)initWithHTML:(NSString *)theHtml delegate:(id<ImageManagerDelegate>) theDelegate;
- (void)process;

@end
