//
//  DUCrystalBall.m
//  CrystalBall
//
//  Created by Deepa Arora on 5/12/14.
//  Copyright (c) 2014 Dubashi. All rights reserved.
//

#import "DUCrystalBall.h"

@implementation DUCrystalBall

- (NSArray *) predictions {
    if (_predictions == nil){
        _predictions = [[NSArray alloc] initWithObjects:@"It is certain",@"It is so!",@"No!",nil];
    }
    return _predictions;
}

- (NSString*) randomPrediction {
    int random = arc4random_uniform(self.predictions.count);
    return [self.predictions objectAtIndex:random];

    
}

@end
