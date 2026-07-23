export default {
  "photon-client/**/*.{js,jsx,ts,tsx,vue,cjs,mjs,cts,mts}":
    "eslint --fix -c photon-client/eslint.config.mjs",

  "photon-client/**/*.{js,jsx,ts,tsx,vue,cjs,mjs,cts,mts,json,css,scss}":
    "prettier --write",

  "website/src/**/*.{js,jsx,ts,tsx,vue,json,css,scss,md}": "prettier --write",

  "photon-client/**/*.{ts,vue}": () =>
    "pnpm -C photon-client run type-check",

  "*.{java,gradle,md}": () => "./gradlew spotlessApply",

  "*.{java,cpp,h,hpp,c,cc,cxx,py}": "wpiformat -f",
};
